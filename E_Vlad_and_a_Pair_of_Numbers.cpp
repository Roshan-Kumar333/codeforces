#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll x;
    cin >> x;
    if(x%2!=0){
        cout << -1 << endl;
        return;
    }
    ll n = x;
    vector<ll> same;
    ll offset = 1;
    ll diff = 0;
    while(n>0){
        if(n%2){
            diff += offset;
        }
        else{
            same.push_back(2*offset);
        }
        offset *= 2;
        n /= 2;
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