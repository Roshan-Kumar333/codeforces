#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll l, r, m;
    cin >> l >> r >> m;
    for (ll i = l; i <= r; i++)
    {
        ll req = m % i;
        ll req2 = m - (((m / i) + 1) * i);
        // cout << req2 << endl;
        // if (m < i)
        // {
        //     // cout << "here" << endl;
        //     req = 1e10;
        // }
        if (r - l >= req)
        {
            cout << i << " " << l + req << " " << l << endl;
            return;
        }
        if (l - r <= req2)
        {
            // cout << "here" << endl;
            cout << i << " " << r+req2 << " " << r << endl;
            return;
        }
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