#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, x, p;
    cin >> n >> x >> p;
    ll y = n - x;
    for (ll i = 1; i <= 2 * n + 1 && i<=p; i++)
    {
        ll temp = i * (i + 1) / 2;
        // cout << temp << " "<<temp%n<<"xx";
        ll temp2 = temp % n;
        if (temp%n == y || (x==0 && temp%n==0) )
        {
            // cout << i << endl;
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
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