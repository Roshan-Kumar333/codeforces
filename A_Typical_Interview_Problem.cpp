#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string a = "";
    for (ll i = 1; i < 1e4;i++)
    {
        if(i%3==0 && i%5==0){
            a += "FB";
        }
        else if(i%3==0){
            a += "F";
        }
        else if(i%5==0){
            a += "B";
        }
    }
    ll k = a.size();
    for (ll i = 0; i <= k - n;i++){
        string temp = a.substr(i, n);
        // cout << temp << endl;
        if(s==temp){
            cout << "YES" << endl;
            return;
        }
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