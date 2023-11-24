#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long offset = 10;
    long long ans = 1;
    if(n<10){
        cout << n << endl;
        return;
    }
    while(offset<=n){
        ans += 9;
        offset *= 10;
    }
    if(offset==n){
        cout << ans << endl;
        return;
    }
    offset /= 10;
    long long x = offset;
    offset *= 2;
    while(offset<=n){
        ans++;
        offset += x;
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