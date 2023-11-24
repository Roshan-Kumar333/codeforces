#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    long long av = 10 - n-1;
    for (long long i = av -1; i > 0;i--){
        av += i;
    }
    cout << 6 * av << endl;
    return;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}