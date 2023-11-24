// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// void print(vector<vector<ll>>&a){
//     for(auto i:a){
//         for(auto j:i){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }
// void solve(){
//     ll n;
//     cin >> n;
//     vector<vector<ll>> a(n, vector<ll>(n));
//     ll first = 1;
//     ll last = n * n;
//     for (ll i = 0; i < n;i++){
//         ll row = i;
//         ll col = 0;
//         if((row+col)%2==0){
//             while(row>=0 && col<n){
//                 a[row][col] = first;
//                 row--;
//                 col++;
//                 first++;
//             }
//         }
//         else{
//             while(row>=0 && col<n){
//                 a[row][col] = last;
//                 last--;
//                 row--;
//                 col++;
//             }
//         }
//     }
//     for (ll i = 1; i < n;i++){
//         ll row = n - 1;
//         ll col = i;
//         if ((row + col) % 2 == 0)
//         {
//             while (row >= 0 && col < n)
//             {
//                 a[row][col] = first;
//                 row--;
//                 col++;
//                 first++;
//             }
//         }
//         else
//         {
//             while (row >= 0 && col < n)
//             {
//                 a[row][col] = last;
//                 last--;
//                 row--;
//                 col++;
//             }
//         }
//     }
//         print(a);
//     return;
// }
// int main(){
//     ll t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool prime(int n){
    if (n==1) return false;
    if(n==2||n==3) return true;
    if(n%2==0||n%3==0) return false;
    for(int i=5;i*i<=n;i+6){
        if(n%i==0||n%(i+2)==0) return false;
    }
    return true;
}
void solve(){
    ll n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n));
    vector<vector<ll>> p(n, vector<ll>(n,0));
    for (ll i = 0; i < n;i++){
        for (ll j = 0; j < n;j++){
            cin >> a[i][j];
            if(prime(a[i][j])){
                p[i][j] = 1;
            }
        }
    }
    vector<vector<ll>> horizontal(n, vector<ll>(n));
    vector<vector<ll>> vertical(n, vector<ll>(n));
    for(ll i = 0;i<n;i++){
        horizontal[i][0] = p[i][0];
        for (ll j = 1; j < n;j++){
            if(p[i][j]!=0){
                horizontal[i][j] += p[i][j - 1];
            }
            else{
                horizontal[i][j] = 0;
            }
        }
    }
    for (ll i = 0; i < n;i++){
        vertical[0][i] = p[0][i];
        for (ll j = 1; j < n;j++){
            if(p[j][i]!=0){
                vertical[j][i] += vertical[j - 1][i];
            }
            else{
                vertical[j][i] = 0;
            }
        }
    }
}
int main(){
return 0;
}