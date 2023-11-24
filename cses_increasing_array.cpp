#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n;i++){
        cin >> a[i];
    }
    ll prev = a[0];
    ll ans = 0;
    for (ll i = 1; i < n;i++){
        if(a[i]<prev){
            ans += prev - a[i];
        }
        else{
            prev = a[i];
        }
    }
    cout << ans << endl;
    return;
}
int main(){
    solve();
    return 0;
}