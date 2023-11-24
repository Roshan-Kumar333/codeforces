#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a[2][2];
    set<long long> s;
    for (long long i = 0; i < 2;i++){
        for (long long j = 0; j < 2;j++){
            cin >> a[i][j];
            s.insert(a[i][j]);
        }
    }
    if(s.size()==1){
        if(a[0][0]==1){
            cout << 2 << endl;
            return;
        }
        else{
            cout << 0 << endl;
            return;
        }
    }
    cout << 1 << endl;
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