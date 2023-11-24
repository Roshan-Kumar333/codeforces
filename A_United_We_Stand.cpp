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
    sort(a.begin(), a.end());
    if(a[0]==a[n-1]){
        cout << -1 << endl;
        return;
    }
    bool flag = true;
    ll size = 1;
    for (ll i = 1; i < n;i++){
        if(a[i]==a[i-1]){
            // cout << "here" << endl;
            size +=1;
        }
        else{
            break;
        }
    }
    cout << size << " " << n - size << endl;
    for (ll i = 0; i < n; i++)
    {
        if (i > 0 && a[i - 1] != a[i] && flag)
        {
            cout << endl;
            flag = false;
        }
        cout << a[i] << " ";
        }
    cout << endl;
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