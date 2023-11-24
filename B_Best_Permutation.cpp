#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    a[n - 1] = n;
    a[n - 2] = n - 1;
    for (long long i =0; i<n-2;i++){
        a[i] = n - 2 - i;
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