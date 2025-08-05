#include<bits/stdc++.h>
using namespace std;
string s;
int dp[5000][5000];
long long goriberdp(int l,int r){
    if(l > r) return 0;
    if(dp[l][r]!=-1) return dp[l][r];
    if(l==r) return 1;
    long long ans =0;
    if(s[l] == s[r]) ans = max(ans,2+goriberdp(l+1,r-1));
    ans = max(ans,goriberdp(l,r-1));
    ans = max(ans,goriberdp(l+1,r));
    return dp[l][r] = ans;
}
int main() {
    cin >> s;
    memset(dp,-1,sizeof dp);
    long long ans = goriberdp(0,s.size()-1);

    cout << ans;
}
