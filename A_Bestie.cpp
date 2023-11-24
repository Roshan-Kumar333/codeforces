#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    return b == 0 ? a : gcd(b, a % b);
}
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> g(n);
    for (long long i = 0;i<n;i++){
        cin >> a[i];
        g[i] = gcd(i, a[i]);
    }
    long long ans = n;
    
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}