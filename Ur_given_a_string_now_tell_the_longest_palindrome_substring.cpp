#include<bits/stdc++.h>
using namespace std;
string s;
int dp[5000][5000];
int pla(int l,int r){
    if(l > r) return 1;

    if(dp[l][r] != -1) return dp[l][r];

    int ans =0;
    if(s[l] != s[r])  ans =0;
    else   ans = pla(l+1,r-1);
    

    return dp[l][r] = ans;
}
int main() {
    cin >> s;
    // int q; cin >> q;
    memset(dp,-1,sizeof dp);
    int ans =0,l=0,r=0;
    for(int i =0;i<s.size();i++){
        for(int j =i+1;j<s.size();j++){
            pla(i,j);
            if(dp[i][j] == 1){
                if(j-i > ans){
                    ans = j-i;
                    l = i+1;
                    r = j+1;
                }
            }
        }
    }
    cout << l <<" " << r;
}
