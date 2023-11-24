#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    string s;
    cin >> s;
    ll n = s.size();
    ll ans = 1;
    ll temp = 1;
    for (ll i = 1; i < n;i+=1){
        if(s[i]==s[i-1]){
            temp += 1;
        }
        else{
            ans = max(ans, temp);
            temp = 1;
        }
    }
    ans = max(ans, temp);
    cout << ans << endl;
    return;
}
int main(){
    solve();
    return 0;
}