#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n0, n1, n2;
    cin >> n0 >> n1 >> n2;
    if(n0>0 && n2>0){
        n1 -= 1;
    }
    string temp1 = "";
    if(n2>0){
        while(n2>-1 ){
            temp1 += "1";
            n2 -= 1;
        }
    }
    string temp2 = "";
    if(n0>0){
        while(n0>-1){
            temp2 += "0";
            n0 -= 1;
        }
    }
    string ans = temp1+temp2;
    if(n0==0 && n2==0){
        ans += "0";
    }
    ll ind = ans.size();
    while(n1>0){
        if(ans[ind-1]=='0'){
            ans += "1";
        }
        else{
            ans += "0";
        }
        ind += 1;
        n1 -= 1;
    }
    cout << ans<< endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}