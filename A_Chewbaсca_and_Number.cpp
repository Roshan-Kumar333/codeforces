#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long x;
    cin >> x;
    deque<long long> d;
    while (x)
    {
        if(x/10==0 && x==9){
            d.push_front(9);
            break;
        }
        long long y = x % 10;
        if (y > 4)
        {
            y = 9 - y;
        }
        d.push_front(y);
        x /= 10;
    }
    while (d.front() == 0)
    {
        d.pop_front();
    }
    if (d.size() == 0)
    {
        cout << 0 << endl;
        return;
    }
    for (auto i : d)
    {
        cout << i;
    }
    cout << endl;
}
int main()
{
    solve();
    return 0;
}