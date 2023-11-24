#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, c;
    cin >> n >> c;
    vector<ll> a(n);
    for (ll i = 0; i < n;i++){
        cin >> a[i];
        a[i] += (i+1);
    }
    sort(a.begin(), a.end());
    ll ans = 0;
    for (ll i = 0; i < n;i++){
        // cout << a[i] << " ";
        if(a[i]<=c){
            ans += 1;
            c -= a[i];
        }
    }
    cout << ans << endl;
    return;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}