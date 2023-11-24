#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, s, r;
    cin >> n >> s >> r;
    ll x = s - r;
    vector<ll> a(n,1);
    s -= x;
    a[0] = x;
    for (ll i = 1; i < n;i++){
        a[i] = 1;
        s -= 1;
    }
    for (ll i = 1; i < n;i++){
        ll temp = min(s, (x - 1));
        a[i] += temp;
        s -= temp;
    }
        for (auto i : a)
        {
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