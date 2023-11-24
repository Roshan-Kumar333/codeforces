#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m, a, b;
    cin >> n >> m >> a >> b;
    long long x = m / b;
    long long ans = 0;
    if(x<a){
        ans += (b * (n / m));
        ans += (a * (n % m));
        cout << ans << endl;
        return;
    }
    else{
        cout << (a * n) << endl;
        return;
    }

}
int main(){
    solve();
    return 0;
}