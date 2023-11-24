#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    if(n%2==0){
        cout << 0 << " " << n / 2 << " " << n / 2 << endl;
        return;
    }
    else{
        cout << -1 << endl;
        return;
    }
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}