#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll npos = 0;
    ll twopos = 0;
    ll onepos = 0;
    for (ll i = 0; i < n;i++){
        cin >> a[i];
        if(a[i]==n){
            npos= i + 1;
        }
        if(a[i]==2){
            twopos = i + 1;
        }
        if(a[i]==1){
            onepos = i + 1;
        }
    }
    if((npos>onepos && npos<twopos) || (npos>twopos && npos<onepos)){
        cout << npos << " " << npos << endl;
        return;
    }
    if(twopos>onepos && npos<onepos){
        cout << npos << " " << onepos << endl;
        return;
    }
    if(twopos>onepos && npos>twopos){
        cout << npos << " " << twopos << endl;
        return;
    }
    if(twopos<onepos&&npos<twopos){
        cout << npos << " " << twopos << endl;
        return;
    }
    if(twopos<onepos && npos>onepos){
        cout << npos << " " << onepos << endl;
        return;
    }
    cout << npos << " " << twopos << endl;
}
int main(){
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
        /* code */
    }
    
    return 0;
}