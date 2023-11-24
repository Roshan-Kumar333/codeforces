#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    map<long long, long long> m;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]] = i;
    }
    long long br = n;
    for (long long i = n - 1; i >= 0; i--)
    {
        if (a[i] < a[i - 1])
        {
            br = i - 1;
            break;
        }
    }
    if (br == n)
    {
        cout << 0 << endl;
        return;
    }
    long long start = 0;
    long long end = br;
    if (start == end)
    {
        cout << 1 << endl;
        return;
    }
    set<long long> s;
    while (start < end)
    {
        long long l = -1;
        for (long long i = end; i >= start; i--)
        {
            // cout << a[i] << " ";
            s.insert(a[i]);
            l = max(l, m[a[i]]);
        }
        // cout << endl;
        start = end;
        end = l;
    }
    cout << s.size() << endl;
    return;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }

    return 0;
}