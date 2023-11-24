#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    if(b==0){
        return a;
    }
    return gcd(b, a % b);
}
void solve(){
    long long n;
    cin >> n;
    if(n==1){
        cout << 1 << " " << 1 << endl;
        return;
    }
    long long ans = n;
    for (long long i = 1; i * i <= n;i++){
        if(n%i==0){
            if(gcd(n/i,i)==1){
                ans = min(ans, n / i);
            }
        }
    }
    cout << n / ans << " " << ans << endl;
    return;
}
int main(){
    solve();
    return 0;
}