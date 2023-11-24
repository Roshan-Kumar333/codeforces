#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, l, r;
    cin >> n >> l >> r;
    vector<long long> ans(n);
    for (long long i = 0; i < n;i++){
        long long x = i + 1;
        long long a = l % x;
        long long b = l-a;
        if(a==0){
            ans[i] = l;
        }
        else if(b+x<=r){
            ans[i] = b + x;
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
    cout <<"YES" << endl;
    for(auto i:ans){
        cout << i << " ";
    }
    cout << endl;
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