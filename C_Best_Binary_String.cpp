#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fill(string &s,ll pos,char c){
    for (ll i = pos - 1; i >= 0 && s[i]=='?';i--){
        s[i] =c;
    }
    for (ll i = pos + 1; i < s.size() && s[i]=='?';i++){
        s[i] = c;
    }
}
void solve(){
    string s;
    cin >> s;
    ll n = s.size();
    bool found = false;
    for (ll i = 0; i < n;i++){
        if(s[i]!='?'){
            fill(s, i, s[i]);
            found = true;
        }
        // cout << s << endl;
    }
    if(!found){
        fill(s, n, '0');
    }
    cout << s << endl;
    // cout << "xxx" << endl;
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