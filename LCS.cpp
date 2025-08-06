#include<bits/stdc++.h>
using namespace std;
int v[1004],v1[1004],dp[1004][1004],n;
int goriberdp(int in,int in2){
    if(in > n || in2 > n) return 0;
    if(dp[in][in2] != -1) return dp[in][in2];
    int ans =0;
    if(v[in] == v1[in2])  ans = max(ans,1+goriberdp(in+1,in2+1));
    ans = max(ans,goriberdp(in+1,in2));
    ans = max(ans,goriberdp(in,in2+1));
    
    return dp[in][in2] = ans;
}
void naf(){
   cin >> n;
   for(int i =1;i<=n;i++) cin >> v[i];
   for(int i =1;i<=n;i++) cin >> v1[i];
   memset(dp,-1,sizeof dp);
   int ans  = goriberdp(1,1);
   cout << ans;
}
int main() {
//    int t; cin >> t;
//    while(t--)
        naf();

}
