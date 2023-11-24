#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vct vector
ll lp(vct<ll>a,ll x, ll start, ll end, ll l){
    ll ans = end;
    while(start<=end){
        ll mid = start + ((end - start) / 2);
        // cout<<"start = "<<start<<"end = "<<end<<" "<<"mid = "<<mid<<endl;
        if((a[mid]+x)>=l){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid + 1;
        }
    }
    // cout <<"8888888888888888888888" << endl;
    return ans;
}
ll rp(vct<ll>a,ll x,ll start, ll end, ll r){
    ll ans = start;
    while(start<=end){
        ll mid = start + ((end - start) / 2);
        if((a[mid]+x)<=r){
            ans = mid;
            start = mid +1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}
void solve(){
    ll n, l, r;
    cin >> n >> l >> r;
    vct<ll> a(n);
    for (ll i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    // for(auto i:a){
    //     cout << i << " ";
    // }
    // cout << endl;
    ll ans = 0;
    for (ll i = 0; i < n;i++){
        ll lmp = lp(a, a[i], i, n, l);
        ll rmp = rp(a, a[i], i, n, r);
        // cout << lmp << " " << rmp << endl;
        if(lmp==n || rmp ==i){
            continue;
        }
        if(lmp==i){
            lmp += 1;
        }
        if(rmp==n){
            rmp -= 1;
        }
        ans += (rmp - lmp + 1);
    }
    cout << ans << endl;
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