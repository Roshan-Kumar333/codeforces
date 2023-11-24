#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    for (ll i = 0; i < n;i++){
        cin >> a[i];
    }
    ll ans = 0;
    ll prev = a[0];
    for (ll i = 1; i < n - 1;i++){
        if(a[i]<=s){
            ans += (prev * a[i]);
            prev = 0;
            continue;
        }
        ll x = min(s, a[i] - s);
        ans += (prev * (a[i] - x));
        prev = x;
    }
    ans += (prev * a[n - 1]);
    cout << ans << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}