#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(string s,ll index){
    index += 7;
    string temp = "caba";
    ll i = 0;
    while(index<s.size()){
        if(s[index]!=temp[i]){
            return true;
        }
        index += 1;
        i += 1;
    }
    return false;
}
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    bool found = false;
    for (ll i = 0; i < n;i++){
        
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