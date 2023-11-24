#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dfs(vector<ll>&money,vector<ll>&open,ll index,ll n){
    if(index>=n){
        return 0;
    }
    ll ans = 0;
    if(open[index]){
        ans += money[index];
    }
    return ans + max(dfs(money, open, 2 * index + 1, n), dfs(money, open, 2 * index + 2, n));
}
void solve(){
    ll n;
    cin >> n;
    vector<ll> money(n);
    vector<ll> open(n);
    for (ll i = 0; i < n;i++){
        cin >> money[i];
    }
    for (ll i = 0; i < n;i++){
        cin >> open[i];
    }
    cout << dfs(money, open, 0, n) << endl;
}
int main(){
    solve();
    return 0;
}