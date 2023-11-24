#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long x = -1;
    long long l = n;
    for (long long i = 0; i < n;i++){
        if(x==-1 && s[i]=='R'){
            x = i;
        }
        else if(x>-1 && s[i]=='L'){
            cout << 0 << endl;
            return;
        }
        if(l==n && s[i]=='L'){
            l = i;
        }
    }
    if(x==-1 || l==n){
        cout << -1 << endl;
        return;
    }
    cout << l + 1 << endl;
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