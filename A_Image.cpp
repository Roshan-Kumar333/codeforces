#include<bits/stdc++.h>
using namespace std;
void solve(){
    string u, l;
    cin >> u >> l;
    set<char> s;
    for(auto i:u){
        s.insert(i);
    }
    for(auto i:l){
        s.insert(i);
    }
    cout << s.size() - 1 << endl;
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