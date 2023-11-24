#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    if(a+b==c){
        cout << "+" << endl;
        return;
    }
    cout << "-" << endl;
    return;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}