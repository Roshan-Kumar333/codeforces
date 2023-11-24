#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a, b, c;
    cin >> a >> b >> c;
    if ((a + b == c) || (b + c == a) || (c + a == b)){
        cout << "YES" << endl;
        return;
    }
    else if((a==b && c%2==0) ||(a==c && b%2==0) ||(b==c && a%2==0)){
        cout << "YES" << endl;
        return;
    }
    else{
        cout << "NO" << endl;
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