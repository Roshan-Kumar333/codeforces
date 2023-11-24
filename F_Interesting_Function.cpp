#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long l, r;
    cin >> l >> r;
    long long ans = r - l;
    long long y = r - l;
    long long x = 10;
    while(x<=r){
        long long a = y / x;
        long long b = y % x + l % x;
        a += b / x;
        ans += a;
        x *= 10;
    }
    cout << ans << endl;
    return;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}