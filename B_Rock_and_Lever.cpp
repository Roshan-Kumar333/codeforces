#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long>a(n);
    map<long long, long long> m;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        long long x = log2(a[i]);
        m[x]++;
    }
    long long ans = 0;
    for(auto i:m){
        long long x = (i.second * (i.second - 1)) / 2;
        ans += x;
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