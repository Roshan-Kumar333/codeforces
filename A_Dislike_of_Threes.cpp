#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll k;
    cin >> k;
    ll limit = 1e8;
    for (ll i = 1; i <= limit;i+=1){
        k -= 1;
        if(i%3==0 || i%10==3){
            k += 1;
        }
        if(!k){
            cout << i << endl;
            return;
        }
    }
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}