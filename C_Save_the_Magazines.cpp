#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    vector<int> b(n);
    cin >> s;
    int ans = 0;
    for (int i = 0; i < n;i++){
        cin >> b[i];
        ans += b[i];
    }
    int mini = b[0];
    bool flag = false;
    if(s[0]=='0'){
        flag = true;
    }
    for (int i = 1; i < n;i++){
        if(s[i]=='0'){
            if(flag){
                ans -= mini;
            }
            mini = b[i];
            flag = true;
        }
        mini = min(b[i], mini);
    }
    if(flag){
        ans -= mini;
    }
    cout << ans << endl;
    return;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}