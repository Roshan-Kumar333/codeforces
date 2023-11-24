#include<bits/stdc++.h>
using namespace std;
#define ll long long
void primeFactors(ll n,map<ll,ll>&mp)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        // cout << 2 << " ";
        n = n / 2;
        mp[2]++;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (ll i = 3; i*i <=n; i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            // cout << i << " ";
            mp[i]++;
            n = n / i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        mp[n]++;
}
void solve(){
    ll n;
    cin >> n;
    map<ll, ll> mp;
    primeFactors(n, mp);
    ll prod = 1;
    vector<pair<ll,ll>> temp;
    for(auto i:mp){
        prod *= i.first;
        temp.push_back({i.second,i.first});
    }
    sort(temp.begin(), temp.end());

    ll ans = 0;
    ll count = 0;
    for(auto i:temp){
        // cout << "i.first = " << i.first << " i.second = " << i.second << endl;
        ll x = 0;
        // ll y = i.first;
        i.first -= count;
        if(i.first>0){
            x = prod * i.first;
        }
        ans += x;
        prod /= i.second;
        count += i.first;
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