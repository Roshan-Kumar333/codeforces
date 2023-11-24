#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long *a = new long long[n];
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    long long ans = 0;
    long long prev = 0;
    for (long long i = 0; i < n;i++){
        a[i] += ans;
        if(a[i]>=prev){
            prev = a[i];
        }
        else{
            ans += (prev - a[i]);
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