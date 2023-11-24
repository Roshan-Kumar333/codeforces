#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    ll temp = 0;
    for (ll i = 0; i <=n;i++){
        temp = temp ^ i;
    }
    for (ll i = 0; i < n - 1;i+=1){
        ll temp2;
        cin >> temp2;
        temp = temp ^ temp2;
    }
    cout << temp << endl;
    return;
}
int main(){
    solve();
    return 0;
}