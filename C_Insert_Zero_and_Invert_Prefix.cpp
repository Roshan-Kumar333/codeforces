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
    if(a[n-1]!=0){
        cout << "NO" << endl;
        return;
    }
    ll count = 0;
    ll count0 = 0;
    cout << "YES" << endl;
    for (ll i = n - 1; i >= 0;i--){
        if(a[i]==0 && count>0){
            ll temp = count + count0;
            while(temp>1){
                cout << 0 << " ";
                temp -= 1;
            }
            cout << count << " ";
            count = 0;
            count0 = 1;
        }
        else if(a[i]==0){
            count0 += 1;
        }
        else{
            count += 1;
        }
    }
    ll temp = count + count0;
    while (temp > 1)
    {
        cout << 0 << " ";
        temp -= 1;
    }
    cout << count << " ";
    count = 0;
    count0 = 1;
    cout << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}