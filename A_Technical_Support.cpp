#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    string s;
    cin >> s;
    for (long long i = 0; i < n;i++){
        if(s[i]=='A' || s[i]=='#'){
            continue;
        }
        bool flag = false;
        for (long long j = i+1; j < n;j++){
            // cout << s[i] << "x" << s[j] << endl;
            if(s[j]=='A'){
                s[j] = '#';
                flag = true;
                break;
            }
        }
        if(!flag){
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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