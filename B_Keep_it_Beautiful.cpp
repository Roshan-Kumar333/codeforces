#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n;i++){
        cin >> a[i];
    }
    string ans = "";
    bool dec = false;
    vector<ll> temp;
    for (ll i = 0; i < n;i++){
        if(temp.empty()){
            ans += "1";
            temp.push_back(a[i]);
        }
        else{
            if(dec){
                if(a[i]>=temp.back() && a[i]<=temp[0]){
                    ans += "1";
                    temp.push_back(a[i]);
                }
                else{
                    ans += "0";
                }
            }
            else{
                if(a[i]>=temp.back()){
                    ans += "1";
                    temp.push_back(a[i]);
                }
                else{
                    if(a[i]<=a[0]){
                        temp.push_back(a[i]);
                        ans += "1";
                        dec = true;
                    }
                    else{
                        ans += "0";
                    }
                }
            }
        }
    }
    // cout << "dec" << decpev << endl;
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