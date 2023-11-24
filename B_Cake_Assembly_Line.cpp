#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, w, h;
    cin >> n >> w >> h;
    vector<ll> a(n);
    vector<ll> b(n);
    for (ll i = 0; i < n;i++){
        cin >> a[i];
    }
    for (ll i = 0; i < n;i++){
        cin >> b[i];
    }
    ll lshift = 0;
    ll rshift = 0;
    for (ll i = 0; i < n;i++){
        ll cleft = a[i] - w-lshift+rshift;
        ll cright = a[i] + w-lshift+rshift;
        cleft = abs(cleft);
        ll dleft = b[i] - h;
        dleft = abs(dleft);
        ll dright = b[i] + h;
        if(cleft>dleft){
            lshift += cleft - dleft;
        }
        if(dright>cright){
            rshift += dright - cright;
        }
    }
    ll x = rshift - lshift;
    for (ll i = 0; i < n;i++){
        ll cleft = a[i] - w +x;
        ll cright = a[i] + w +x;
        cleft = abs(cleft);
        ll dleft = b[i] - h;
        dleft = abs(dleft);
        ll dright = b[i] + h;
        if (cleft > dleft)
        {
            cout << "NO" << endl;
            return;
        }
        if (dright > cright)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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