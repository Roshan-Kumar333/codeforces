#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long *a = new long long[n];
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    for (long long i = n - 1; i >= 1;i--){
        if((a[i]%a[i-1])==0){
            continue;
        }
        else if(a[i]%a[i-2]==0){
            long long x = a[i] /a[i - 2];
            long long y = a[i - 1] - x;
            if(y%a[i-2]==0){
                continue;
            }
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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