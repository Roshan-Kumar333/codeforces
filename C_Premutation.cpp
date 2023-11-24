#include<bits/stdc++.h>
using namespace std;
#define ll long long
void print(vector<ll>&a){
    for(auto i:a){
        cout << i << " ";
    }
    return;
}
void solve(){
    ll n;
    cin >> n;
    vector<vector<ll>>a(n,vector<ll>(n-1));
    for (ll i = 0; i < n;i++){
        for (ll j = 0; j < n-1;j++){
            cin >> a[i][j];
        }
    }
    vector<ll> count(n + 1);
    for (ll i = 0; i < n;i++){
        count[a[i][n - 2]]++;
    }
    ll last = -1;
    for (ll i = 1; i <= n;i++){
        if(count[i]>1){
            last = i;
            break;
        }
    }
    for (ll i = 0; i < n;i++){
        bool flag = false;
        for (ll j = 0; j < n - 1;j++){
            if(a[i][j]==last){
                flag = true;
            }
        }
        if(!flag){
            print(a[i]);
            cout << last << endl;
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