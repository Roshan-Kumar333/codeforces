#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll a, b;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    ll ans = a + b;
    ll rem = abs(a - b);
    rem -= 1;
    if(rem<=0){
        cout << ans << endl;
        return;
    }
    cout << ans+rem << endl;
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