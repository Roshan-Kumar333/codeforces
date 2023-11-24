#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n+1,0);
    ll tot = 0;
    for (ll i = 1; i <= n;i++){
        cin >> a[i];
        tot += a[i];
    }
    for (ll i = 2; i <= n;i++){
        a[i] += a[i - 1];
    }
    while (q--)
    {
        ll l, r, k;
        cin >> l >> r >> k;
        ll x = a[r] - a[l - 1];
        ll y = r - l + 1;
        y *= k;
        ll temp = tot - x + y;
        // cout << "x = " << x << endl;
        // cout << temp << endl;
        if(temp%2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}