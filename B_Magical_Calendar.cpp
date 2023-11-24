#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, r;
    cin >> n >> r;
    long long x;
    if(n<=r){
        x = (n * (n - 1)) / 2;
        x++;
    }
    else{
        x = (r * (r + 1)) / 2;
    }
    cout << x << endl;
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