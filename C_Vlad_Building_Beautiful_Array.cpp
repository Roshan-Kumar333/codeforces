#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    string ans = "YES";
    ll so = 1e14;
    for (ll i = 0; i < n;i++){
        cin >> a[i];
        if(a[i]%2==1){
            so = min(so, a[i]);
        }
    }
    for (ll i = 0; i < n;i++){
        if(a[i]%2==0){
            if(a[i]<=so){
                ans = "NO";
            }
        }
    }
    if(so>=1e14){
        ans = "YES";
    }
    cout << ans << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}