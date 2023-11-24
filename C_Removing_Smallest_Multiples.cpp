#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long ans = 0;
    vector<bool> a(n + 1, true);
    for (long long i = 1; i <= n;i++){
        if(s[i-1]=='0'){
            if(a[i]){
                ans += i;
                a[i] = false;                
            }
            for (long long j = 2 * i; j <= n;j+=i){
                if(s[j-1]=='0' && a[j]){
                    ans += i;
                    a[j] = false;
                }
                if(s[j-1]=='1'){
                    // cout << "here" << endl;
                    break;
                }
            }
        }
    }
    cout << ans << endl;
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