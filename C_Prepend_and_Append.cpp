#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll start = 0;
    ll end = n - 1;
    ll ans = n;
    while (start < end && ((s[start] == '0' && s[end] == '1') || (s[end] == '0' && s[start]=='1'))){
        ans -= 2;
        start++;
        end--;
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