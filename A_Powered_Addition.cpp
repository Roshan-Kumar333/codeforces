#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll helper(ll n){
    ll ans = 0;
    ll temp = 1;
    while(n--){
        ans += temp;
        temp *= 2;
    }
    return ans;
}
bool isPossible(vector<ll>&a,ll mid){
    ll prev = -1e10;
    for (ll i = 0; i < a.size();i+=1){
        if(prev>a[i]){
            ll diff = prev - a[i];
            ll temp = helper(mid);
            if(temp<diff){
                return false;
            }
        }
        else{
            prev = a[i];
        }
    }
    return true;
}
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n;i++){
        cin >> a[i];
    }
    ll l = 0;
    ll r = 60;
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