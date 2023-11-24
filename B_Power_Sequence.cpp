#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPossible(ll n,ll b, ll c){
    if(c<=1){
        return true;
    }
    ll temp = 1;
    while(b--){
        temp *= c;
        if(temp>n){
            return false;
        }
    }
    return true;
}
ll powCal(ll a,ll n){
    ll ans = 1;
    while(n){
        if(n%2){
            ans *= a;
        }
        a = a * 1LL * a;
        n /= 2;
    }
    return ans;
}
ll baseFind(ll n, ll b)
{
    ll l = 0, r = 1e9;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        // cout << " mid = " << mid << endl;
        if (isPossible(n,b,mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
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
    sort(a.begin(), a.end());
    ll c = baseFind(a[n - 1], n - 1);
    // ll c = 1;
    ll c1 = c + 1;
    if(n>60){
        c1 = 1;
    }
    ll ans1 = 0;
    ll ans2 = 0;
    for (ll i = 0; i < n; i++)
    {
        ll temp =powCal(c, i);
        ans1 += abs(temp - a[i]);
        temp = powCal(c1, i);
        ans2 += abs(temp - a[i]);
    }
    cout << min(ans1, ans2) << endl;
    return;
}
int main()
{
    solve();
    return 0;
}