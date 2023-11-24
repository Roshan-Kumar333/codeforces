#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ans = 0;
    if(a<=c){
        ll x = abs(a - c);
        b += x;
        if(b>d){
            cout << -1 << endl;
            return;
        }
        ans += x;
        ans += 2 * (d - b);
    }
    else{
        ll x = abs(c - a);
        if(b>d){
            cout << -1 << endl;
            return;
        }
        ans += x;
        ans += 2 * (d - b);
    }
    cout << ans << endl;
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