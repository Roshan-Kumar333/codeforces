#include <bits/stdc++.h>
using namespace std;
#define ll long long
void rev(string &s, ll n)
{
    ll start = 0;
    ll end = n - 1;
    while (start < end)
    {
        swap(s[start], s[end]);
        start += 1;
        end -= 1;
    }
}
void solve()
{
    ll n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    string s3 = s2;
    rev(s3, n);
    if (s1 == s2)
    {
        cout << 0 << endl;
        return;
    }
    if (s3 == s1)
    {
        cout << 2 << endl;
        return;
    }
    ll diff1 = 0;
    ll diff2 = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
        {
            diff1 += 1;
        }
        if (s1[i] != s3[i])
        {
            diff2 += 1;
        }
    }
    ll ans = LONG_MAX;
    if(diff1%2){
        ans = min(ans, 2 * diff1 - 1) ;
    }
    else{
        ans = min(ans, 2 * diff1);
    }
    if(diff2==0){
        ans = min(ans, 2LL);
    }
    if(diff2%2==0){
        ans = min(ans, 2 * diff2 - 1);
    }
    else{
        ans = min(ans, 2 * diff2);
    }
    cout << ans << endl;
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