#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, k;
    cin >> n >> k;
    int ans = 1;
    int req = (n - 1) / k;
    ans += req;
    if((n-1)%k!=0){
        ans += 1;
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