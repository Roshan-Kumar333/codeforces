#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n;i++){
        cin >> a[i].first;
        cin >> a[i].second;
    }
    ll count = 0;
    ll prev = -1e10;
    for (ll i = 0; i < n;i++){
        if(a[i].first-a[i].second>prev){
            count += 1;
            prev = a[i].first;
        }
        else if(i==n-1 || a[i].first+a[i].second<a[i+1].first){
            count += 1;
            prev = a[i].first + a[i].second;
        }
        else{
            prev = a[i].first;
        }
    }
    cout << count << endl;
}
int main(){
    solve();
    return 0;
}