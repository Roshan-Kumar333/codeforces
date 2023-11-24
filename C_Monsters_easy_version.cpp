#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    ll sum = 0;
    vector<ll> a(n);
    for (ll i = 0; i < n;i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end());
    ll ans = 0;
    ans += (a[0] - 1);
    a[0] = 1;
    for (ll i = 0; i < n - 1;i++)
    {
        ll x = a[i + 1] - a[i];
        if(x==0){
            continue;
        }
        ans += (x - 1);
        a[i + 1] = a[i] + 1;
    }
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