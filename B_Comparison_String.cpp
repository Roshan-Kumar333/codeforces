#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll maxi = 1;
    ll count=1;
    for (ll i = 1; i < n;i++){
        if(s[i]==s[i-1]){
            count += 1;
        }
        else{
            maxi = max(maxi, count);
            count = 1;
        }
    }
    maxi = max(maxi, count);
    cout << maxi + 1 << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}