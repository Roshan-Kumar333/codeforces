#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d;
    if((sy-d>1 && sx+d<n) || (sy+d<m && sx-d>1)){
        cout << ((m - 1) + (n - 1)) << endl;
        return;
    }
    cout << -1 << endl;
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