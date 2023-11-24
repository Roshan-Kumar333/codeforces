#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    string s;
    cin >> s;
    map<string,long long> s1;
    for (long long i = 0; i < n - 1;i++){
        string temp = "";
        temp += s[i];
        temp += s[i + 1];
        if(s1.find(temp)!=s1.end() ){
            if(s1[temp]<i-1){
                cout << "YES" << endl;
                return;
            }
        }
        else{
            s1[temp] = i;
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