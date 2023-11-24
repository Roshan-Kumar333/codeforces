#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long y, k, n;
    cin >> y >> k >> n;
    long long x =  k- (y % k);
    if(x+y>n){
        cout << -1 << endl;
        return;
    }
    while((y+x)<=n){
        cout << x << " ";
        x += k;
    }
    cout << endl;
}
int main(){
    solve();
    return 0;
}