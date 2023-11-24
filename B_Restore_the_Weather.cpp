#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,k;
    cin >> n>>k;
    vector<pair<ll,ll>> a(n);
    vector<ll> b(n);
    for (ll i = 0; i < n;i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    for (ll i = 0; i < n;i++){
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    vector<ll> ans(n);
    sort(a.begin(), a.end());
    for (ll i = 0; i < n;i++)
    {
        ans[a[i].second] = b[i];
    }
    for(auto i:ans){
        cout << i << " ";
    }
    cout << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}