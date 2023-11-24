#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    // cout << x << " " << y << " " << maxi << " " << mini << endl;
    long long x = a * d;
    long long y = c * b;
    if(x==y){
        cout << 0 << endl;
        return;
    }
    if(x==0 || y==0){
        cout << 1 << endl;
        return;
    }
    if(x%y==0 || y%x==0){
        cout << 1 << endl;
        return;
    }
    cout << 2 << endl;
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