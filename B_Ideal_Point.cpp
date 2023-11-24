#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> a(n);
    ll l = 0;
    ll r = 50;
    for (ll i = 0; i < n;i++){
        cin >> a[i].first;
        cin >> a[i].second;
        if(a[i].first<=k && a[i].second>=k){
            l = max(l, a[i].first);
            r = min(r, a[i].second);
        }
    }
    // cout << l << " " << r << endl;
    if(l==k && r==k ){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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