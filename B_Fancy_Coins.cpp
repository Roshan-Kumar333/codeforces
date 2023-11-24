#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll m, k, a1, ak;
    cin >> m >> k >> a1 >> ak;
    m -= (ak * k);
    m -= a1;
    if(m<=0){
        cout << 0 << endl;
        return;
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