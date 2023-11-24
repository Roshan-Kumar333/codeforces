#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> ans;
    set<long long> s;
    for (long long i = 1; i <= n;i++){
        if(s.find(i)==s.end()){
            ans.push_back(i);
            long long x = 2*i;
            while(x<=n){
                ans.push_back(x);
                s.insert(x);
                x *= 2; 
            }
        }
    }
    cout << 2 << endl;
    for(auto i:ans){
        cout << i << " ";
    }
    cout << endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}