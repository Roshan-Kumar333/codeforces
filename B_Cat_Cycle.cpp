#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, k;
    cin >> n >> k;
    long long x = n / 2;
    k--;
    long long y = k / x;
    if(n%2==0){
        long long c = (k+1) % n;
        if(c==0){
            cout << n << endl;
            return;
        }
        else{
            cout << c << endl;
            return;
        }
    }
    else{
        long long c = (k + y +1) % n;
        if(c==0){
            cout << n << endl;
            return;
        }
        else{
            cout << c << endl;
            return;
        }
    }
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}