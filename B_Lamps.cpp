// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// void solve(){
//     ll n;
//     cin >> n;
//     vector<pair<ll,ll>> a(n);
//     map<ll, vector<ll>> m;
//     for (ll i = 0; i < n;i++){
//         cin >> a[i].first;
//         cin >> a[i].second;
//         m[a[i].first].push_back(a[i].second);
//     }
//     // for(auto i:m){
//     //     sort(i.second.begin(), i.second.end());
//     //     // cout << i.first << endl;
//     // }
//     ll count = 0;
//     ll ans = 0;
//     for(auto i:m){
//         // cout << "hereee" << i.first << endl;
//         sort(i.second.begin(), i.second.end());
//         while(count<i.first && (!i.second.empty())){
//             ans += i.second[i.second.size()-1];
//             i.second.pop_back();
//             count += 1;
//         }
//         count = 0;
//         // cout << i.first << endl;
//         // for(auto j:i.second){
//         //     cout << j << " ";
//         // }
//         // cout << endl;
//     }
//     cout << ans << endl;
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
void solve(){
        ll n;
        cin >> n;
        vector<pair<ll,ll>> a(n);
        map<ll, vector<ll>> m;
        for (ll i = 0; i < n;i++){
            cin >> a[i].first;
            cin >> a[i].second;
            m[a[i].first].push_back(a[i].second);
        }
        for(auto i:m){
            sort(i.second.begin(), i.second.end());
        }
        for(auto i:m){
            cout << i.first << endl;
            for(auto j:i.second){
                cout << j << " ";
            }
        }
        cout << endl;
}
int main(){
        ll t;
        cin >> t;
        while(t--){
            solve();
        }
        return 0;
}