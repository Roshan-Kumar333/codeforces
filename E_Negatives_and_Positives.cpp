#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    ll mini = INT_MAX;
    ll count = 0;
    for (ll i = 0; i < n;i++){
        cin >> a[i];
        sum += abs(a[i]);
        mini = min(mini, abs(a[i]));
        if(a[i]<0){
            count += 1;
        }
    }
    if(count%2==1){
        sum -= (2*mini);
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