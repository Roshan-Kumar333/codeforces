#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    ll mul = 0;
    for (ll i = 0; i < n;i++){
        cin >> a[i];
        sum += a[i];
        if(a[i]==-1){
            mul += 1;
        }
    }
    if(sum>=0){
        if(mul%2==0){
            cout << 0 << endl;
            return;
        }
        else{
            cout << 1 << endl;
            return;
        }
    }
    ll temp = abs(sum);
    ll temp2 = temp / 2;
    if(temp%2){
        temp2 += 1;
    }
    ll ans = temp2;
    mul -= temp2;
    if(mul%2){
        ans += 1;
    }
    cout << ans << endl;
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