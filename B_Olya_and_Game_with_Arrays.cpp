#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    ll n;
    cin >> n;
    vector<vector<ll>> a;
    for (ll i = 0; i < n;i++){
        ll m;
        cin >> m;
        vector<ll> temp(m);
        for (ll j = 0; j < m;j++){
            cin >> temp[j];
        }
        sort(temp.begin(), temp.end());
        a.push_back(temp);
    }
    if(n==1){
        cout << a[0][0] << endl;
        return;
    }
    ll mini = 1e8;
    ll second_mini = 1e8;
    ll sum = 0;
    for (ll j = 0; j < n;j++){
        sum += a[j][1];
        mini = min(a[j][0], mini);
        second_mini = min(a[j][1], second_mini);
    }
    // cout << sum << " " << second_mini << " " << mini << endl;
    sum -= second_mini;
    sum += mini;
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