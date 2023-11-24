// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long 
// void solve(){
//     ll n;
//     cin >> n;
//     vector<vector<ll>> a(2, vector<ll>(n));
//     for (ll i = 0; i < 2;i++){
//         for (ll j = 0; j < n;j++){
//             cin >> a[i][j];
//         }
//     }
//     if(n==1){
//         cout << 0 << endl;
//         return;
//     }
//     ll ans = INT_MAX;
//     for (ll i = n - 2; i >= 0;i--){
//         a[0][i] += a[0][i + 1];
//     }
//     ll prefix = 0;
//     for (int i = 0; i < n-1;i++){
//         ll x = a[0][i + 1];
//         ll y = prefix;
//         x = max(x, y);
//         ans = min(ans, x);
//         prefix += a[1][i];
//     }
//     cout << min(ans,prefix) << endl;
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
bool isPrime(int n){
    if(n==1){
        return false;
    }
    if(n%2==0){
        return false;
    }
    if(n%3==0){
        return false;
    }
    for (int i = 5; i * i <= n;i+=6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}
int numb(vector<int>&a){
    int ans = 0;
    for (int i = 0; i < a.size();i++){
        ans *= 10;
        ans += a[i];
    }
    return ans;
}
void generatePalindromes(vector<int>&a,int n,int &ans,int index=0){
    if(n%2==0 && index>(n/2-1)){
        // cout << numb(a) << endl;
        if(isPrime(numb(a))){
            ans = max(ans, numb(a));
        }
        return;
    }
    if(n%2==1 && index>n/2){
        // cout << index << endl;
        // cout << numb(a) << endl;
        if(isPrime(numb(a))){
            ans = max(ans, numb(a));
        }
        return;
    }
    if(index>0){
        for (int i = 0; i <= 9;i++){
            a[index] = i;
            a[n - 1 - index] = i;
            generatePalindromes(a, n, ans, index + 1);
        }
    }
    else{
        for (int i = 1; i <= 9;i++){
            a[index] = i;
            a[n - 1 - index] = i;
            generatePalindromes(a, n, ans, index + 1);
        }
    }
}
void solve(){
    int n;
    cin >> n;
    vector<int> a(n, 0);
    int ans = 2;
    generatePalindromes(a, n, ans);
    if(ans==2){
        cout << -1 << endl;
        return;
    }
    cout << ans << endl;
    return;
}
int main(){
    solve();
    return 0;
}