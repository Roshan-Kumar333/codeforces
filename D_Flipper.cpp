#include <bits/stdc++.h>
using namespace std;
#define ll long long
void print(vector<ll> &a)
{
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    return;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll largest = n;
    if (a[0] == n)
    {
        largest = n - 1;
    }
    ll pos = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == largest)
        {
            pos = i;
        }
    }
    vector<ll> ans(n);
    fill(a, ans, pos);
    print(ans);
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