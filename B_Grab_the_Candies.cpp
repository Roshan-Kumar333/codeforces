#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    ll a = 0, b = 0;
    vector<ll> ar(n);
    for (ll i = 0; i < n;i++){
        cin >> ar[i];
        if(ar[i]%2){
            b += ar[i];
        }
        else{
            a += ar[i];
        }
    }
    if(a>b){
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