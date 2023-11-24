#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    string s;
    cin >> s;
    string temp = "314159265358979323846264338327";
    ll count = 0;
    ll n = s.size();
    for (ll i = 0; i < n;i++){
        if(s[i]==temp[i]){
            count += 1;
        }
        else{
            break;
        }
    }
    cout << count << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}