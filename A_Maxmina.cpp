#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,k;
    cin >> n >> k;
    vector<long long> a(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    for (long long i = 0; i < n;i++){
        if(a[i]==1){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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