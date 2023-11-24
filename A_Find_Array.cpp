#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    for (long long i = 0; i < n;i++){
        cout << i + 2 << " ";
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