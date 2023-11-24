#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    string s;
    cin >> s;
    long long ans = n;
    for (long long i = 1; i < n;i++){
        if(s[i]!=s[i-1]){
            ans += i;
        }
    }
    cout << ans << endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}