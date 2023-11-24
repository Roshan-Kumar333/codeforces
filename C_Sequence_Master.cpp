#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(2*n);
    ll allsum = 0;
    for (ll i = 0; i < 2*n;i++){
        cin >> a[i];
        allsum += abs(a[i]);
    }
    if(n==1){
        cout << min(allsum,abs(a[1] - a[0]))<<endl;
        return;
    }
    if(n%2){
        cout << allsum << endl;
        return;
    }
    if(n==2){
        ll first = 0;
        for(auto i:a){
            first += abs(i - 2);
        }
        ll second = INT_MAX;
        ll closest = a[0];
        for(auto i:a){
            if(abs(i-2)<second){
                closest = i;
                second = abs(i - 2);
            }
        }
        ll ans = 0;
        for(auto i:a){
            ans += abs(i+1);
        }
        ans += abs(closest - 2);
        ans -= (closest + 1);
        ans = min({ans, first, allsum});
        cout << abs(ans) << endl;
        return;
    }
    ll ans = 0;
    ll second = INT_MAX;
    ll closest = a[0];
    for (auto i : a)
    {
        if (abs(i - n) <= second)
        {
            closest = i;
            second = abs(i - n);
        }
    }
    for (auto i : a)
    {
        ans += abs(i + 1);
    }
    ans += abs(closest - n);
    ans -= (closest + 1);
    ans = min(ans, allsum);
    cout << abs(ans) << endl;
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