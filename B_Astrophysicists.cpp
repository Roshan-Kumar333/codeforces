#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, k, g;
    cin >> n >> k >> g;
    ll tot = 0;
    ll tot2 = k * g;
    ll temp = g / 2;
    ll x = g / 2;
    if(g%2){
        x += 1;
    }
    if(g%2==0){
        temp -= 1;
    }
    ll temp1 = (n - 1) * temp;
    if(temp1+temp>=tot2){
        cout << tot2 << endl;
        return;
    }
    ll temp2 = tot2 - temp1;
    if((temp2%g)>=x){
        tot = temp2 + g - (temp2 % g);
    }
    else{
        tot = temp2 - (temp2 % g);
    }
    cout << tot2 - tot << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}