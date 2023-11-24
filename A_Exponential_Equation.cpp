#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    if(n%2==1){
        cout << -1 << endl;
        return;
    }
    cout << 1 << " " << n / 2 << endl;
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