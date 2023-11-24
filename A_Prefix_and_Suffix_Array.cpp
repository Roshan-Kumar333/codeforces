#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<string> a;
    ll x = 2 * n - 2;
    vector<string> b(x);
    for (ll i = 0; i < x;i++){
        cin >> b[i];
        if(b[i].size()==n-1){
            a.push_back(b[i]);
        }
    }
    // vector<int> temp(26, 0);
    // for (char c : a[0])
    // {
    //     temp[c - 'a'] += 1;
    // }
    // for (char c : a[1])
    // {
    //     temp[c - 'a'] -= 1;
    // }
    // for(auto i:temp){
    //     cout << i << endl;
    //     if (i != 0)
    //     {
    //         cout << "NO" << endl;
    //         return;
    //     }
    // }
    // cout << "YES" << endl;
    // return;
    string p = a[0];
    string q = a[1];
    ll start = 0;
    ll end = n - 2;
    while(start<end){
        swap(p[start], p[end]);
        start += 1;
        end -= 1;
    }
    if(p==q){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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