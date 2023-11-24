#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    ll x, k;
    cin >> x >> k;
    if(x%k==0){
        cout << 2 << endl;
        cout << 1 << " " << x - 1 << endl;
        return;
    }
    cout << 1 << endl;
    cout << x << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}