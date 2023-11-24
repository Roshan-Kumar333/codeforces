#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> arr(n, vector<ll>(3));
    for (ll i = 0; i < n;i++){
        for (ll j = 0; j < 3;j++){
            cin >> arr[i][j];
        }
    }
    ll maxi = m;
    ll mini = m;
    for (ll i = 0; i < n;i++){
        ll temp = arr[i][0];
        if(i>0){
            temp -= arr[i - 1][0];
        }
        ll curr_min = mini - temp;
        ll curr_max = maxi + temp;
        if(curr_min>arr[i][2] || curr_max<arr[i][1]){
            cout << "NO" << endl;
            return;
        }
        mini = max(arr[i][1], curr_min);
        maxi = min(arr[i][2], curr_max);
    }
    cout << "YES" << endl;
    return;
}
int main(){
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
        /* code */
    }
    
    return 0;
}