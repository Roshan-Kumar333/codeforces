#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long ans = INT_MAX;
    for (long long i = 1; i < n - 1;i++){
        long long x = abs(a[i] - a[i - 1]) + a[i + 1] - a[i];
        ans = min(ans, x);
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