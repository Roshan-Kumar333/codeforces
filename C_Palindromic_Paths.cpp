#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> mat(n, vector<ll>(m));
    for (ll i = 0; i < n;i++){
        for (ll j = 0; j < m;j++){
            cin >> mat[i][j];
        }
    }
    map<int, int> f1;
    map<int, int> f2;
    map<int, int> l1;
    map<int, int> l2;

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            int dis = i + j;
            int dis2 = n - 1 - i;
            dis2 += m - 1 - j;
            if(mat[i][j]){
                f2[dis] += 1;
                l2[dis2] += 1;
            }
            else{
                f1[dis] += 1;
                l1[dis2] += 1;
            }
        }
    }
    int limit = (m + n-1) / 2;
    int ans = 0;
    for (int i = 0; i <limit;i++){
        ll ones = f2[i] + l2[i];
        ll zeros = l1[i] + f1[i];
        ll req = ones + zeros - max(ones, zeros);
        ans += req;
    }
    cout << ans << endl;
}
int main(){
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}