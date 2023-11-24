#include<bits/stdc++.h>
using namespace std;
long long help(long long x,long long b,long long d){
    while(x<=b){
        long long temp = x;
        x += temp;
    }
    if(x<=d){
        return x;
    }
    return -1;
}
void solve(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long mul = a * b;
    for (long long i = a + 1; i <= c;i++){
        long long x = mul / i;
        if(x==0){
            x = i / mul;
        }
        long long y = help(x, b, d);
        if(y!=-1){
            cout << i << " " << y << endl;
            return;
        }
    }
    cout << -1 << " " << -1 << endl;
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