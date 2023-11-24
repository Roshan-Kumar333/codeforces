#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pr 1e9 + 7
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n;i++){
        cin >> a[i];
    }
    vector<vector<ll>> ans(n,vector<ll>(4));
    ll count = 0;
    for (ll i = 1; i < n;i++){
        ll x = min(a[i], a[0]);
        a[0] = x;
        ans[count][0] = 1;
        ans[count][1] = i+1;
        ans[count][2] = x;
        ans[count][3] = a[i - 1] + 1;
        a[i] = a[i - 1] + 1;
        count++;
    }
    for(auto i:a){
        cout << i << " ";
    }
    cout << endl;
    cout << count << endl;
    for (int i = 0; i < count;i++){
         cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << " " << ans[i][3] << endl;
    }
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
/*
6 3 9 
6 3 5
5 6 7
5 3 9
6 9 3
*/
