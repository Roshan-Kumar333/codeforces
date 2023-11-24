#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll ans = 0;
    map<ll, map<char, ll>> m;
    ll start = 0;
    ll end = k - 1;
    while(start<=end){
        for (ll i = start; i < n;i+=k){
            m[start][s[i]] += 1;
        }
        if(start!=end){
            for (ll i = end; i < n;i+=k){
                m[start][s[i]] += 1;
            }
        }
        start += 1;
        end -= 1;
    }
    ll temp = n/ k;
    temp*=2;
    for(auto i:m){
        ll maxi = INT_MIN;
        for(auto j:i.second){
            maxi = max(maxi, j.second);
        }
        // cout << maxi << "xx";
        if(k%2 && i.first==k/2){
            ll x = temp / 2;
            ans += (x - maxi);
        }
        else{
            ans += (temp - maxi);
        }
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