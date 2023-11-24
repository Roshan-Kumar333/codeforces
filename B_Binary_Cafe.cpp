#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll nCr(ll n, ll r)
{
    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, 0LL));
    dp[0][0] = 1;

    for (ll i = 1LL; i <= n; i++)
    {
        dp[i][0] = 1;
        if (i <= r)
            dp[i][i] = 1;
        for (ll j = 1LL; j < i; j++)
        {
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }

    return dp[n][r];
}
void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> temp;
    ll curr = 1;
    while(curr<=n && k>0){
        temp.push_back(curr);
        curr *= 2;
        k -= 1;
    }
    ll s = temp.size();
    ll ans = 0;
    for (ll i = 1; i < s;i++){
        ans += nCr(s - 1, i);
    }
    ll s2 = s - 1;
    if(temp.size()>=2 && temp[s-1]+temp[s-2]>n){
        s2 -= 1;
    }
    for (ll i = 1; i <=s2;i++){
        ans += nCr(s2, i);
    }
    ans += 1;
    ans += 2;
    cout << ans << endl;
}
int main(){
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}