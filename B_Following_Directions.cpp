#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll x = 0, y = 0;
    for(char c:s){
        if(c=='U'){
            y += 1;
        }
        else if(c=='D'){
            y -= 1;
        }
        else if(c=='R'){
            x += 1;
        }
        else if(c=='L'){
            x -= 1;
        }
        if(x==1 && y==1){
            cout << "YES" << endl;
            return;
        }
        // cout << "x = " << x << " y = " << y << endl;
    }
    cout << "NO" << endl;
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