#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
        string s;
    cin >> s;
    map<int, char> m;
    for (long long i = 0; i < n;i++){
        if(m.find(a[i])==m.end()){
            m[a[i]] = s[i];
        }
        else{
            // cout << "here " << m[a[i]] << s[i] << endl;
            if(s[i]!=m[a[i]]){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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