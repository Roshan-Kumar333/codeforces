#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, c, q;
    cin >> n >> c >> q;
    string s;
    cin >> s;
    long long *l = new long long[c];
    long long *r = new long long[c];
    for (long long i = 0; i < c;i++){
        cin >> l[i];
        cin >> r[i];
        string x = s.substr(l[i] - 1, (r[i] - l[i] + 1));
        s += x;
    }
    while(q--){
        long long k;
        cin >> k;
        cout << s[k - 1] << endl;
    }
    return;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}