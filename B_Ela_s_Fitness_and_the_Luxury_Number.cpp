#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long l, r;
    cin >> l >> r;
    long long l1 = sqrtl(l);
    long long r1 = sqrtl(r);
    long long ans = 3 * ((r1 - l1) - 1);
    if (l1 == r1)
    {
        ans = 0;
    }
    if (l1 * (l1 + 1) >= l && l1 * (l1 + 1) <= r)
    {
        ans += 1;
    }
    if (l1 * l1 >= l && l1 * l1 <= r)
    {
        ans += 1;
    }
    if (l1 * (l1 + 2) >= l && l1 * (l1 + 2) <= r)
    {
        ans += 1;
    }
    if (l1 != r1)
    {
        if (r1 * r1 <= r && r1 * r1 >= l)
        {
            ans += 1;
        }
        if (r1 * (r1 + 1) <= r && r1 * (r1 + 1) >= l)
        {
            ans += 1;
        }
        if (r1 * (r1 + 2) <= r && r1 * (r1 + 2) >= l)
        {
            ans += 1;
        }
    }
    cout << ans << endl;
    return;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}