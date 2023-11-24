#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string s;
    cin >> s;
    ll n = s.size();
    vector<vector<ll>> a(10);
    for (ll i = 0; i < n;i++){
        ll x = (ll)(s[i] - '0');
        a[x].push_back(i + 1);
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}