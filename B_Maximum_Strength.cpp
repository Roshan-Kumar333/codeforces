#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fill(string &s,ll n){
    string temp = "";
    while(n--){
        temp += "0";
    }
    temp += s;
    s = temp;
}   
void solve(){
    string s1, s2;
    cin >> s1 >> s2;
    if(s1.size()<s2.size()){
        ll temp = s2.size() - s1.size();
        fill(s1, temp);
    }
    if(s2.size()<s1.size()){
        ll temp = s1.size() - s2.size();
        fill(s2, temp);
    }
    ll n = s1.size();
    ll ans = 0;
    for (ll i = 0; i < n;i++){
        ll temp1 = (ll)(s1[i] - '0');
        ll temp2 = (ll)(s2[i] - '0');
        if(temp1<temp2){
            ll temp3 = n - i - 1;
            ans += (9 * temp3);
            ans += abs(temp1 - temp2);
            break;
        }
        else{
            ans += abs(temp1 - temp2);
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