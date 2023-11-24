#include<bits/stdc++.h>
using namespace std;
#define ll long long
void reverse(vector<ll>&a){
    ll n = a.size();
    ll start = 0;
    ll end = n - 1;
    while(start<end){
        swap(a[start], a[end]);
        start++;
        end--;
    }
}
void fill(vector<ll>&a,ll n){
    ll x = n;
    while((x/10)!=0){
        ll sum = 0;
        ll temp = x;
        while(temp>0){
            sum += (temp % 10);
            temp /= 10;
        }
        x = sum;
        a.push_back(sum);
    }
    a.push_back(x);
    // reverse(a);
}
ll helper(set<pair<ll,ll>>&a,ll n){
    ll count = 0;
    for(auto i:a){
        if(n>=i.first && n<=i.second){
            count += 1;
        }
        if(count==2){
            break;
        }
    }
    return count;
}
void solve(){
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    vector<vector<ll>> b(n);
    for (ll i = 0; i < n;i++){
        cin >> a[i];
        fill(b[i], a[i]);
    }
    // vector<ll>temp(n,-1);
    set<pair<ll, ll>> s;
    while(q--){
        ll tc;
        cin >> tc;
        if(tc==1){
            ll l, r;
            cin >> l >> r;
            s.insert({l, r});
        }
        else{
            ll x;
            cin >> x;
            ll c = helper(s, x);
            if(c==0){
                cout << a[x] << endl;
            }
            if(c==1){
                cout << b[x][0] << endl;
            }
            if(c==2){
                cout << b[x][1] << endl;
            }
        }
    }
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