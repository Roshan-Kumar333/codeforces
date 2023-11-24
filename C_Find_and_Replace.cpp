#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> temp1(n);
    vector<ll> temp2(n);
    bool flag = true;
    for (ll i = 0; i < n;i++){
        if(flag){
            temp1[i] = 1;
            temp2[i] = 0;
        }
        else{
            temp1[i] = 0;
            temp2[i] = 1;
        }
        flag = !flag;
    }
    vector<int> a(26,-1);
    bool flag1 = true;
    bool flag2 = true;
    for (ll i = 0; i < n;i++){
        ll x = s[i] - 'a';
        if(a[x]==-1){
            a[x] = temp1[i];
        }
        else{
            if(temp1[i]!=a[x]){
                flag1 = false;
                break;
            }
        }
    }
    vector<int> b(26, -1);
    for (ll i = 0; i < n; i++)
    {
        ll x = s[i] - 'a';
        if (b[x] == -1)
        {
            b[x] = temp2[i];
        }
        else
        {
            if (temp2[i] != b[x])
            {
                flag2 = false;
                break;
            }
        }
    }
    if(flag1||flag2){
        cout << "YES" << endl;
        return;

    }
    cout << "NO" << endl;
    return;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}