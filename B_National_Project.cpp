#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, g, b;
    cin >> n >> g >> b;
    long long x = (n + 1) / 2;
    long long y = x / g;
    if(x%g!=0){
        y++;
    }
    long long p = b * (y - 1) + x;
    if ((n - p) > 0){
        p = n;
    }
    cout << p << endl;
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