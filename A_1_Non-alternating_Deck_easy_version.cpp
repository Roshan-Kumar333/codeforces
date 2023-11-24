#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    ll alice = 0;
    ll bob = 0;
    bool flag = true;
    ll i = 1;
    while(n>0){
        if(flag){
            ll x = min(i, n);
            alice += x;
            n -= x;
            x = min(i + 1, n);
            bob += x;
            n -= x;
        }
        else{
            ll x = min(i, n);
            bob += x;
            n -= x;
            x = min(i + 1, n);
            alice += x;
            n -= x;
        }
        i += 2;
        flag = !flag;
    }
    cout << alice << " " << bob << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}