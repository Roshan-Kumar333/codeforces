#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
const int mod = 998244353;
 
int main(){
    int t;
    cin >> t;
    while(t--) {
        int n, temp;
        cin >> n;
        temp = n;
        map<int, int>m;
        for(int i = 2; i * i <= n; i++) {
            while(n % i == 0) {
                m[i]++;
                n /= i;
            }
        }
        if(n != 1) {
            m[n]++;
        }
        ll ans = 0;
        
        while(!m.empty()) {
            ll x = 1e9;
            for(auto it: m) {
                x = min(it.second, x);
            }
            ll curr = 1;
            vector<int>v;
            for(auto it:m) {
                curr *= it.first;
                m[it.first] -= x;
                if(m[it.first] == 0){
                    v.push_back(it.first);
                }
            }
            for(auto it:v) {
                m.erase(it);
            }
           // cout << curr <<" f" << x << endl;
            ans += curr * x;
        }
        cout << ans << '\n';
 
    }
}