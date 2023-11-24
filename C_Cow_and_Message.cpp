#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    string s;
    cin >> s;
    map<char, ll> m;
    for(auto c:s){
        m[c] += 1;
    }
    ll st = INT_MIN;
    ll rev = INT_MIN;
    for (ll i = 0; i < 26;i++){
        char f = (char)('a' + i);
        ll st2 = INT_MIN;
        ll rev2 = INT_MIN;
        for (ll j = 0; j < 26;j++){
            char sec = (char)('a' + j);
            // cout << f << " " << sec << endl;
            ll countf = 0;
            ll counts = 0;
            ll ans1 = 0;
            ll ans2 = 0;
            for (auto c : s)
            {
                if (c == f)
                {
                    // cout << c<<" first";
                    ans1 += counts;
                    countf += 1;
                }
                else if (c == sec)
                {
                    // cout << c<<" second";
                    ans2 += countf;
                    counts += 1;
                }
            }
            st2 = max(st2, ans1);
            rev2 = max(rev2, ans2);
        }
        // if(rev<rev2){
        //     cout << f << endl;
        //     cout << rev2 << endl;
        // }
        st = max(st, st2);
        rev = max(rev, rev2);
    }
    ll temp = INT_MIN;
    for(auto i:m){
        temp = max(temp, i.second);
    }
    ll temp2 = (temp * (temp - 1)) / 2;
    // cout << "st = " << st << "  rev = " << rev << " temp = " << temp << " temp2 = " << temp2 << endl;
    cout << max({st, rev, temp, temp2}) << endl;
    return;
}
int main(){
    solve();
    return 0;
}