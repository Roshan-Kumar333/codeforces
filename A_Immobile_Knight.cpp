#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m;
    cin >> n >> m;
    if(n==3 && m==3){
        cout << 2 << " " << 2 << endl;
        return;
    }
    cout << min(n, m) << " " << min(n, m) << endl;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}