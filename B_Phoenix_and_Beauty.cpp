#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    set<long long> s;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        s.insert(a[i]);
    }
    if(s.size()>k){
        cout << -1 << endl;
        return;
    }
    cout << n * k << endl;
    while(n--){
        for(auto i:s){
            cout << i << " ";
        }
        long long x = k-s.size();
        while(x--){
            cout << 1 << " ";
        }
    }
    cout << endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}