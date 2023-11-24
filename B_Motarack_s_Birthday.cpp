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
    ll mini = 1e9;
    ll maxi = -1;
    for (ll i = 0; i < n;i++){
        if(a[i]!=-1){
            if(i>0 && a[i-1]==-1){
                mini = min(mini, a[i]);
                maxi = max(maxi, a[i]);
            }
            if(i<n-1 && a[i+1]==-1){
                mini = min(mini, a[i]);
                maxi = max(maxi, a[i]);
            }
        }
    }
    ll temp = mini + maxi;
    temp /= 2;
    ll ans = 0;
    for (ll i = 0; i < n;i++){
        if(a[i]==-1){
            a[i] = temp;
        }
        if(i>0){
            ans = max(ans, abs(a[i] - a[i - 1]));
        }
    }
    cout << ans <<" "<< temp << endl;
    return;
}
int main(){
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}