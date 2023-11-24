#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, m;
    cin >> n >> m;
    deque<ll> dq;
    dq.push_back(n);
    while(!dq.empty()){
        ll temp = dq.front();
        if(temp==m){
            cout << "YES" << endl;
            return;
        }
        dq.pop_front();
        ll temp2 = temp / 3;
        if(temp2>0 && temp%3==0){
            dq.push_back(temp2);
            dq.push_back(2 * temp2);
        }
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