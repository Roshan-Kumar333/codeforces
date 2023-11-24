#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    char c;
    cin >> c;
    set<char> s;
    string st = "codeforces";
    for(auto i:st){
        s.insert(i);
    }
    if(s.find(c)!=s.end()){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
    return;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}