#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    for (long long i = 1; i <= n;i++){
        for (long long j = 1; j <= i;j++){
            if(j==1 || j==i){
                cout << 1 << " ";
            }
            else{
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
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