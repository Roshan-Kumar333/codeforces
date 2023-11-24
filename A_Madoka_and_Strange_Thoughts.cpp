#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long ans = 0;
    long long x = n / 6;
    long long y = n / 2;
    long long z = n / 3;
    ans += 5 * x;
    y -= x;
    z -= x;
    ans += 3 * y;
    ans += 3 * z;
    long long p = n - (x + y + z);
    ans += p;
    cout << ans << endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}