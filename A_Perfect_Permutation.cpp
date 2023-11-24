#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> ans(n);
    for (long long i = 0; i < n;i++){
        ans[i] = i + 1;
    }
    for (long long i = 0;i<n;i+=2){
        if(i+1<n){
            swap(ans[i], ans[i + 1]);
        }
    }
    if(n%2!=0){
        swap(ans[0], ans[n - 1]);
    }
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