#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    if(n==1){
        cout << "Alice" << endl;
        return;
    }
    if(n<5){
        cout << "Bob" << endl;
        return;
    }
    cout << "Alice" << endl;
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