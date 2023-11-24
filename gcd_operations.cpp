// #include <bits/stdc++.h>
// #define ll long long int
// #define mod 1000000007
// #define endl "\n"

// using namespace std;

// int main()
// {

//     ll n;
//     cin >> n;
//     ll a[n];
//     ll count1 = 0;
//     ll gcd = 0;
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         if (a[i] == 1)
//             count1++;
//         gcd = __gcd(gcd, a[i]);
//     }
//     if (gcd != 1)
//     {
//         cout << -1 << endl;
//     }
//     else if (count1 != 0)
//     {
//         cout << n - count1 << endl;
//     }
//     else
//     {
//         ll ans = INT_MAX;
//         for (ll i = 0; i < n; i++)
//         {
//             ll gcdx = a[i];
//             for (ll j = i + 1; j < n; j++)
//             {
//                 gcdx = __gcd(gcdx, a[j]);
//                 if (gcdx == 1)
//                 {
//                     ans = min(ans, j - i - 1 + n);
//                 }
//             }
//         }
//         cout << ans << endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll count = 0;
    ll count2 = 0;
    for (ll i = 0; i < n;i+=1){
        cin >> a[i];
        if(a[i]==1){
            count += 1;
        }
        if(a[i]%2){
            count2 += 1;
        }
    }
    if(count){
        cout << n - count << endl;
        return;
    }
    for (ll i = 0; i < n - 1;i+=1){
        if(__gcd(a[i],a[i+1])==1){
            cout << n << endl;
            return;
        }
    }
    cout << -1 << endl;
    return;
}
int main(){
    solve();
    return 0;
}