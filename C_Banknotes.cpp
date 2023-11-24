#include<bits/stdc++.h>
using namespace std;
long long power(long long b,long long a){
    long long ans = 1;
    while(a){
        if(a&1){
            ans *= b;
        }
        b *= b;
        a = a >> 1;
    }
    return ans;
}
void solve(){
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        a[i] = power(10, a[i]);
    }
    // vector<long long> b(n);
    // for(auto i:a){
    //     cout << i << " ";
    // }
    // cout << endl;
    long long ans = 0;
    k++;
    for (long long i = 0; i < n - 1;i++){
        long long x = a[i + 1] / a[i]-1;
        if(x>=k){
            ans += a[i] * min(k, x);
            k = 0;
            break;
        }
        k -= x;
        ans += a[i] * x;
    }
    ans += a[n - 1] * k;
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