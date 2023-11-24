#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, m, d;
    cin >> n >> m >> d;
    map<ll, ll> mp;
    vector<ll> a(n);
    vector<ll> b(n);
    for (ll i = 0; i < n;i++){
        cin >> a[i];
        mp[a[i]] = i + 1;
    }
    for (ll i = 0; i < m;i++){
        cin >> b[i];
    }
    ll moves = 0;
    for (ll i = m - 1;i>=0; i++)
    {
        
    }
    cout << moves << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}