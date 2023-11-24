#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    set<ll> s;
    for (ll i = 0; i < n;i++){
        cin >> a[i];
        if(a[i]==i+1){
            s.insert(a[i]);
        }
    }
    if(s.size()==n){
        cout << 0 << endl;
        return;
    }
    ll offset = 1;
    while(!s.empty() && s.find(offset)!=s.end()){
        s.erase(offset);
        offset += 1;
    }
    offset = n;
    while(!s.empty() && s.find(offset)!=s.end()){
        s.erase(offset);
        offset -= 1;
    }
    if(s.empty()){
        cout << 1 << endl;
        return;
    }
    cout << 2 << endl;
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