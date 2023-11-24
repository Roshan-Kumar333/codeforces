#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    long long ans = 0;
    for (long long i = 1; i < n;i++){
        if((a[i-1]%2==0 && a[i]%2==0) ||( a[i-1]%2==1 && a[i]%2==1)){
            ans++;
            // a[i] = a[i] * a[i - 1];
        }
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