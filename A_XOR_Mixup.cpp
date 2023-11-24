#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long *a = new long long[n];
    long long x = 0;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        x = x ^ a[i];
    }
    cout << a[0] << endl;
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