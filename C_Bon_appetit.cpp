#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> c(m);
    map<ll, ll> mp;
    priority_queue<ll> pq1;
    priority_queue<ll> pq2;
    for (ll i = 0; i < n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for (ll i = 0; i < m;i++){
        cin >> c[i];
        pq2.push(c[i]);
    }
    for(auto i:mp){
        pq1.push(i.second);
    }
    ll count = 0;
    while(!pq1.empty() && !pq2.empty()){
        ll x = pq1.top();
        ll y = pq2.top();
        // cout << x << " " << y << endl;
        pq1.pop();
        pq2.pop();
        ll z = min(x, y);
        x -= z;
        pq1.push(x);
        count += z;
    }
    cout << count << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}