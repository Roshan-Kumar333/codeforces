#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isPossible(vector<ll>&a,ll diff){
    ll count = 0;
    ll prev = 0;
    ll ind = 0;
    ll n = a.size();
    while(ind<n &&  count<=3){
        while( ind <n && a[prev]+2*diff>=a[ind]){
            ind += 1;
        }
        prev = ind;
        count += 1;
    }
    return ind >= n && count <= 3;
}
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll l = 0, r = 1e10;
    while(l<r){
        ll mid = l + (r - l) / 2;
        if(isPossible(a,mid)){
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }
    cout << r << endl;
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