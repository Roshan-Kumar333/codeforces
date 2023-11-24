#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a, b, c;
    cin >> a >> b >> c;
    if(b<c){
        b = 2 * c - b;
    }
    if(a<b){
        cout << 1 << endl;
        return;
    }
    if(b<a){
        cout << 2 << endl;
        return;
    }
    cout << 3 << endl;
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