#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long *a = new long long[n];
    long long mini = 0;
    long long maxi = 0;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    for(long long i=1;i<n;i++){
        long long x = abs(a[i] - a[i - 1]);
        if(x>=2){
            cout << "YES" << endl;
            cout << i << " " << i+1 << endl;
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