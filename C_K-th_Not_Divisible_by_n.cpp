#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, k;
    cin >> n >> k;
    long long quotient, remainder;
    quotient = k / (n - 1);
    remainder = k % (n - 1);
    if(remainder==0){
        cout << n * quotient - 1 << endl;
        return;
    }
    else{
        cout << n * quotient + remainder<<endl;
        return;
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