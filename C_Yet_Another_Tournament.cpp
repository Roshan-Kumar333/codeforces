// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// bool myCmp(ll a, ll b){
//     return a > b;
// }
// void solve(){
//     ll n, m;
//     cin >> n >> m;
//     vector<ll> a(n);
//     map<ll, vector<ll>> mp;
//     for (ll i = 0; i < n;i++){
//         cin >> a[i];
//         mp[a[i]].push_back(i);
//     }
//     for(auto i:mp){
//         sort(i.second.begin(), i.second.end(),myCmp);
//     }
//     sort(a.begin(), a.end());
//     vector<bool> def(n, false);
//     for(auto i:a){
//         for(auto j:mp[i]){
//             if(m-i>=0){
//                 def[j] = true;
//                 m -= i;
//             }
//         }
//     }
//     ll count = 0;
//     for(auto i:def){
//         if(i){
//             count++;
//         }
//     }
//     ll posa = 0;
//     for (ll i = 0; i < n;i++)
//     {
//         ll win = i;
//         if(def[i]==false){
//             win = i + 1;
//         }
//         if(win>count){
//             posa++;
//         }
//     }
//     cout << posa + 1 << endl;
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
int ans(vector<int>&price,vector<int>&pages,int n,int x,int i=0){
    if(i==n){
        return 0;
    }
    int a = INT_MIN;
    if(price[i]<=x){
        a = pages[i] + ans(price, pages, n, x - price[i], i + 1);
    }
    int b = ans(price, pages, n, x, i + 1);
    return max(a, b);
}
int main(){
    int n,x;
    cin >> n >> x;
    vector<int> prev(x+1, 0);
    for (int i = n - 1; i >= 0;i--){
        
    }
        return 0;
}