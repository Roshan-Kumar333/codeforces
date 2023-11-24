#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<char, ll> m;
    for(char c:s){
        m[c]++;
    }
    ll ans = INT_MIN;
    set<char> st;
    st.insert(s[0]);
    m[s[0]]--;
    if(m[s[0]]==0){
        m.erase(s[0]);
    }
    ll x = st.size() + m.size();
    ans = max(ans, x);
    for (ll i = 1; i < n;i++){
        st.insert(s[i]);
        m[s[i]]--;
        if (m[s[i]] == 0)
        {
            m.erase(s[i]);
        }
        x = st.size() + m.size();
        ans = max(ans, x);
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