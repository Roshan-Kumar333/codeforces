#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll mini = INT_MAX;
    map<ll, ll> mp;
    set<ll> s;
    for (ll i = 0; i < n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    ll count = 0;
    for (ll i = 0; i < n;i++){
        if(s.find(a[i])==s.end()){
            ll x = 0;
            if(mp.find(a[i]+1)!=mp.end()){
                x = min(mp[a[i]], mp[a[i] + 1]);
            }
            count += (mp[a[i]] - x);
            s.insert(a[i]);
        }

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