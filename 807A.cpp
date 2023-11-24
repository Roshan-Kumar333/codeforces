// #include<bits/stdc++.h>
// using namespace std;
// void solve(){
//     long long n, x;
//     cin >> n >> x;
//     long long *a = new long long[2 * n];
//     for (long long i = 0; i < 2 * n;i++){
//         cin >> a[i];
//     }
//     sort(a, a + (2 * n));
//     for (long long i = 0;i<n;i++){
//         if((a[i+n]-a[i])<x){
//             cout << "NO" << endl;
//             return;
//         }
//     }
//     cout << "YES" << endl;
//     return;
// }
// int main(){
//     long long t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// void isodd(ll n){

// }
// void iseven(ll n){
    
// }
// void solve(){
//     ll n;
//     cin >> n;
//     if(n%2){

//     }
//     else{

//     }
// }
// int main(){
//     solve();
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dfs(vector<pair<ll,ll>>&a,vector<vector<ll>> &dp, ll n, ll m, ll i, ll pages, ll mini){
    if(i>=n || m<=0){
        return 0;
    }
    ll nt = dfs(a, dp, n, m, i + 1, pages, mini);
    ll t = dfs(a, dp, n, m - 1, i + 1, pages + a[i].first, min(mini, a[i].second));
    
}
void solve(){
    ll n, m;
    cin >> n >> m;
    vector<pair<ll,ll>> a(n);
    for (ll i = 0; i < n;i++){
        cin >> a[i].first;
        cin >> a[i].second;
    }
    vector<vector<ll>> dp(n + 1, vector<ll>(m + 1, -1));
}
int main(){
    solve();
    return 0;
}