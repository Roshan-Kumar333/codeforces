#include<bits/stdc++.h>
using namespace std;
#define ll long long
void print(vector<vector<ll>>&mat){
    for(auto i:mat){
        for(auto j:i){
            cout << j << " ";
        }
        cout << endl;
    }
}
void solve(){
    ll n,m;
    cin >> n>>m;
    vector<vector<ll>> mat(n, vector<ll>(m));
    ll mul = 0;
    for (ll i = 1; i < n;i+=2){
        mat[i][0] = mul * m + 1;
        mul += 1;
    }
    mul = n/2;
    for (ll i = 0; i < n;i+=2){
        mat[i][0] = m * (mul ) + 1;
        mul += 1;
    }
    for (ll i = 0; i < n;i++){
        for (ll j = 1; j < m;j++){
            mat[i][j] = mat[i][j - 1] + 1;
        }
    }
    print(mat);
    cout << endl;
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