#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    long long allB = n;
    long long allC = n;
    for (int i = n - 1; i >= 0;i--){
        if(s[i]==t[i]){
        }
        if(t[i]=='a'){
            if(s[i]!='b'){
                cout << "NO" << endl;
                return;
            }
            allB = min((long long i, allB);

        }
        else if(t[i]=='b'){

        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = 0; i < n;i++){
        if(s[i]!=t[i]){
            cout << "NO" << endl;
            return;
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