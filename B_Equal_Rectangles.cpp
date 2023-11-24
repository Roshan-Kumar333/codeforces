#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long *a = new long long[4 * n];
    for (long long i = 0; i < 4*n;i++){
        cin >> a[i];
    }
    sort(a, a + 4 * n);
    long long start = 0;
    long long end = 4 * n - 1;
    long long req = a[0] * a[end];
    while(start<end){
        long long x = a[start] * a[end];
        if(x!=req){
            cout << "NO" << endl;
            return;
        }
        // if(a[start]!=a[start+1] || a[end]!=a[end-1]){
        //     cout << "NO" << endl;
        //     return;
        // }
        start += 2;
        end -= 2;
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