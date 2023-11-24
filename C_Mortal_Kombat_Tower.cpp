#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dfs(vector<ll> &a, ll n, ll i, bool turn, vector<vector<ll>>& dp)
{
    if(i>=n){
        return 0;
    }
    if(dp[i][turn]!=-1){
        return dp[i][turn];
    }
    ll temp = INT_MAX;
    if(turn){
        if(i<n-1){
            if(a[i]==0){
                temp = min(temp, dfs(a, n, i + 1, !turn,dp));
                if(a[i+1]==1){
                    temp = min(temp, 1+dfs(a, n, i + 2, !turn,dp));
                }
                else{
                    temp = min(temp, dfs(a, n, i + 2, !turn,dp));
                }
            }
            else{
                temp =min(temp, 1+dfs(a, n, i + 1, !turn,dp));
                if (a[i + 1] == 1)
                {
                    temp =min(temp,2+ dfs(a, n, i + 2, !turn,dp));
                }
                else
                {
                    temp = min(temp, 1+dfs(a, n, i + 2, !turn,dp));
                }
            }
        }
        else{
            if(a[i]==1){
                temp = 1;
            }
            else{
                temp = 0;
            }
        }
    }
    else{
        temp = min(temp, dfs(a, n, i + 1, !turn,dp));
        temp = min(temp, dfs(a, n, i + 2, !turn,dp));
    }
    return dp[i][turn]=temp;
}
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n;i++){
        cin >> a[i];
    }
    vector<vector<ll>> dp(n + 1, vector<ll>(2, -1));
    cout << dfs(a, n, 0, true,dp) << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}