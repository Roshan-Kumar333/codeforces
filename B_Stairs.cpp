#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long a = 2;
    long long b = a - 1;
    long long offset = (b * (b + 1)) / 2;
    long long ans = 0;
    while(n-offset>=0){
        ans++;
        a *= 2;
        b = a - 1;
        n -= offset;
        offset = (b * (b + 1)) / 2;
    }
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
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     long long n;
//     cin >> n;
//     long long a = 2;
//     while(a<=n){
//         long long b = a - 1;
//         cout << "for a = "<<b<<" "<<(b * (b + 1)) / 2 << endl;
//         a *= 2;
//     }
//     return 0;
// }