#include<bits/stdc++.h>
using namespace std;
#define mod 998244353;
long long factorial(long long n){
    long long ans = 1;
    for (long long i = 1;i<=n;i++){
        ans =(ans*i)%mod;
    }
    return ans % mod;
}
long long nCr(long long n,long long r){
    long long x = factorial(n - r);
    n = factorial(n);
    r = factorial(r);
    r = (r * x) % mod;
    return n / r;
}
void solve(){
    long long n;
    cin >> n;
    long long totalAlex=
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}