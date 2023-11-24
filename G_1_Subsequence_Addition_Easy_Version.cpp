#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (ll i = 1; i < n;i++){
        b[i] += b[i - 1];
    }
    if(b[0]!=1){
        cout << "NO" << endl;
        return;
    }
    for (ll i = 1; i < n - 1;i++){
        ll x = a[i + 1] - a[i];
        if(b[i-1]<x){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
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