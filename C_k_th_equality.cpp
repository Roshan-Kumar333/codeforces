#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll lar(ll n){
    ll ans = 0;
    while(n--){
        ans *= 10;
        ans += 9;
    }
    return ans;
}
ll sma(ll n){
    ll ans = 1;
    while(n>1){
        ans *= 10;
        n -= 1;
    }
    return ans;
}
ll dig(ll n){
    ll ans = 0;
    while(n){
        ans += 1;
        n /= 10;
    }
    return ans;
}
void solve(){
    ll a, b, c, k;
    cin >> a >> b >> c >> k;
    ll temp = max(a, b);
    if(c<temp || c>temp-1){
        cout << -1 << endl;
        return;
    }
    string ans = "";
    ll ast = sma(a);
    ll bst = sma(b);
    ll cst = ast + bst;
    temp = min(k, (lar(a) - 1));
    if(temp==k){
        ast += temp;
        cst += temp;
    }
    else{
        ast = lar(a);
        k -= sma(a) * 9;
        
        bst = cst - ast;
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