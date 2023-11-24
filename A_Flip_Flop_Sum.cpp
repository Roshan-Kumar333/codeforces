#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (ll i = 0; i < n;i++){
        cin >> a[i];
        sum += a[i];
    }
    bool flag = false;
    for (ll i = 0; i < n - 1;i++){
        if(a[i]==-1 && a[i+1]==-1){
            sum += 4;
            flag = true;
            break;
        }
    }
    if(flag){
        cout << sum << endl;
        return;
    }
    if(sum==n){
        cout << sum - 4 << endl;
        return;
    }
    cout << sum << endl;
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