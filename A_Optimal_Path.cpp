#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m;
    cin >> n >> m;
    long long ans = (m * (m + 1)) / 2;
    long long x = 2*m;

    for (long long i = 1; i < n;i++){
        ans += x;
        x+=m;
    }
    cout << ans << endl;
}
int main(){
    long long t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}