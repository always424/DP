#include<bits/stdc++.h>
using namespace std;
int v[1004],v1[1004],dp[104][104][104],n;
int goriberdp(int in,int in2,int pre){
    if(in > n || in2 > n) return 0;

    if(dp[in][in2][pre] !=-1) return dp[in][in2][pre];
    int ans =0; 
    if(v[in] == v1[in2] && v[pre] < v[in] ) ans = max(ans,goriberdp(in+1,in2+1,in) +1);
    ans = max(ans,goriberdp(in+1,in2,pre));
    ans = max(ans,goriberdp(in,in2+1,pre));
    return dp[in][in2][pre] = ans;
}
void naf(){
   cin >> n;
   for(int i =1;i<=n;i++) cin >> v[i];
   for(int i =1;i<=n;i++) cin >> v1[i];
   memset(dp,-1,sizeof dp);
   v[0] = INT_MIN;
   int ans  = goriberdp(1,1,0);
   cout << ans;
}
int main() {
//    int t; cin >> t;
//    while(t--)
        naf();

}

