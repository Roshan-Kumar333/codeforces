#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n;i++){
        a[i] = i + 1;
    }
    if(n==1){
        cout << 1 << endl;
        return;
    }
    long long x = 0;
    if(n%2!=0){
        x = 1;
    }
    for (long long i = n-1; i>=x;i-=2){
        swap(a[i], a[i - 1]);
    }
    for(auto i:a){
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