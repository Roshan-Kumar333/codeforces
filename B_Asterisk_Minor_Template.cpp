#include<bits/stdc++.h>
using namespace std;
void solve(){
    string a, b;
    cin >> a >> b;
    if(a[0]==b[0]){
        cout << "YES" << endl;
        string ans = a.substr(0,1);
        ans = ans + "*";
        cout << ans << endl;
        return;
    }
    if(a[a.size()-1]==b[b.size()-1]){
        cout << "YES" << endl;
        string ans = "*";
        ans += b.substr(b.size() - 1, 1);
        cout << ans << endl;
        return;
    }
    for (int i = 1; i < a.size();i++){
        for (int j = 1; j < b.size();j++){
            if(a[i]==b[j] && a[i-1]==b[j-1]){
                cout << "YES" << endl;
                string ans = "*";
                ans += a[i - 1];
                ans += a[i];
                ans += "*";
                cout << ans << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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