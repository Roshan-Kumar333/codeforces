#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    string s;
    cin >> s;
    ll n = s.size();
    string ans = "";
    for (ll i = 0; i < n;i+=1){
        ans += s[i];
        if(s[i]==')'){
            ans+="("
        }
        else{
            ans += ")";
        }
    }
    
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}