#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> arr(n);
    for (ll i = 0; i < n;i++){
        cin >> arr[i];
        if(arr[i]>q){
            arr[i] = 0;
        }
        else{
            arr[i] = 1;
        }
    }
    for (ll i = 0; i < n;i++){
        if( i>0 && arr[i-1]!=0 && arr[i]!=0){
            arr[i] += arr[i - 1];
        }
    }
    // for (ll i = 0; i < n;i++){
    //     cout << arr[i] << " ";
    // }
    ll ans = 0;
    for (ll i = 0; i < n;i++){
        if(arr[i]==0 && i>0 && arr[i-1]!=0){
            ll diff = arr[i - 1] - k + 1;
            if(diff>0){
                 ans += (diff * (diff + 1)) / 2;
            }
        }
    }
    if(arr[n-1]!=0){
        ll diff = arr[n - 1] - k + 1;
        if(diff>0){
           ans += (diff * (diff + 1)) / 2;
        }
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