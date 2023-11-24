#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, z;
    cin >> n >> z;
    long long *a = new long long[n];
    long long ans = INT_MIN;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        ans = max(ans, a[i] | z);
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