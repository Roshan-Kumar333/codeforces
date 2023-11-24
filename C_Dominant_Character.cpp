#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long ans = INT_MAX;
    for (long long i = 0; i < n;i++){
        if(s[i]=='a'){
            if(((i+1)<n) && s[i+1]=='a'){
                ans = min(ans, (long long)2);
            }
            if(((i+2)<n)&& s[i+2]=='a'){
                ans = min(ans, (long long)3);
            }
            else if(((i+3)<n) && s[i+3]=='a'){
                if((s[i+1]=='b' && s[i+2]=='c') ||(s[i+1]=='c' && s[i+2]=='b')){
                    ans = min(ans, (long long)4);
                }
            }
            if(((i+3)<n) && ((i+6)<n) && s[i+3]=='a' && s[i+6]=='a'){
                if((s[i+1]==s[i+2]) && (s[i+4]==s[i+5]) && (s[i+1]!=s[i+4])){
                    ans = min(ans, (long long)7);
                }
            }
        }
    }
    if(ans==INT_MAX){
        cout << -1 << endl;
        return;
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