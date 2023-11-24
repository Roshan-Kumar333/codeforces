#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    vector<long long> ans(n, 0);
    map<long long, long long> m;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        m[a[i]]++;
    }
    
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}