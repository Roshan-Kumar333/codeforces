#include<bits/stdc++.h>
using namespace std;
#define ll long long
void reverse(vector<ll>&a, ll start, ll end){
    while(start<end){
        swap(a[start], a[end]);
        start += 1;
        end -= 1;
    }
}
void reset(vector<ll>&a, ll n){
    for (ll i = 0; i < n;i++){
        a[i] = i + 1;
    }
}
ll sum(vector<ll>&a, ll n){
    ll sum = 0;
    ll maxi = -1e8;
    for (ll i = 0; i < n;i++){
        ll temp = (i + 1) * a[i];
        sum += ((i + 1) * a[i]);
        maxi = max(maxi, temp);
    }
    return sum-maxi;
}
void print(vector<ll>&a){
    for(auto i:a){
        cout << i << " ";
    }
    cout << endl;
}
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n;i+=1){
        a[i] = i + 1;
    }
    ll ans = INT_MIN;
    for (ll i = 0; i <= n;i+=1){
        reverse(a, n - i, n - 1);
        // print(a);
        ll temp = sum(a, n);
        ans = max(ans, temp);
        reset(a, n);
    }
    cout << ans << endl;
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