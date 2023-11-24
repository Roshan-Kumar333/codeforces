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
    long long sum = 0;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        sum += a[i];
    }
    long long sum2 = 0;
    long long ans = INT_MIN;
    for (long long i = 0; i < n - 1;i++){
        sum2 += a[i];
        ans = max(ans, gcd(sum2, sum - sum2));
    }
    cout << ans << endl;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}