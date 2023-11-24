#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    vector<long long> b(n);
    vector<long long> ans(2 * n);
    set<long long> s;
    for (long long i = 0; i < 2 * n; i++)
    {
        s.insert(i + 1);
    }
    long long index = 0;
    for (long long i = 0; i < n; i++)
    {
        cin >> b[i];
        s.erase(b[i]);
        ans[index] = b[i];
        index += 2;
    }
    if (s.find(2 * n) == s.end() || s.find(1) != s.end())
    {
        cout << -1 << endl;
        return;
    }
    for (long long i = 1; i < 2 * n; i += 2)
    {
        long long x = ans[i - 1];
        x += 1;
        while (s.find(x) == s.end())
        {
            x++;
            if(x>2*n){
                cout << -1 << endl;
                return;
            }
        }
        ans[i] = x;
        s.erase(x);
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
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