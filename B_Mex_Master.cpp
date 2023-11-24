#include<bits/stdc++.h>
using namespace std;
#define ll long long
void print(vector<ll>&a){
    for(auto i:a){
        cout << i << " ";
    }
    cout <<"xxxx"<< endl;
}
bool myCmp(ll a,ll b){
    return a > b;
}
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> m;
    for (ll i = 0; i < n;i++){
        cin >> a[i];
        m[a[i]] += 1;
    }
    ll count = m[0];
    ll x = n / 2;
    ll y = n - count;
    if(y>=x){
        cout << 0 << endl;
        return;
    }
    if(m.size()>=3){
        cout << 1 << endl;
        return;
    }
    if(m.find(1)==m.end()){
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