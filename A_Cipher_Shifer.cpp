#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    char prev = s[0];
    ans += prev;
    bool taken = true;
    for (ll i = 1; i < n;i++){
        if(taken){
            if(s[i]==prev){
                taken= false;
            }
        }
        else{
            prev = s[i];
            ans += prev;
            taken = true;
        }
    }
    cout << ans << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}