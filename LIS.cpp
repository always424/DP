#include<bits/stdc++.h>
using namespace std;
int v[1004],dp[1004],n;
int goriberdp(int in){
    if(in == n) return 1;

    if(dp[in] != 0) return dp[in];
    int ans =0;
    for(int i = in+1;i<=n;i++){
        if(v[in] < v[i]) ans = max(ans,1+goriberdp(i));
    }
    return dp[in] =ans;
}
void naf(){
   cin >> n;
   for(int i =1;i<=n;i++) cin >> v[i];
   v[0] = INT_MIN;
    int ans = goriberdp(0);
    cout << ans-1;
}
int main() {
   int t; cin >> t;
   while(t--)
        naf();

}
