#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    map<long long, long long> m;
    long long ans = INT_MAX;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        if(m.find(a[i])!=m.end()){
            ans = min(ans, i - m[a[i]] + 1);
        }
        m[a[i]] = i;
    }
    if(ans==INT_MAX){
        cout << -1 << endl;
        return;
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