#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    if(a1==0){
        cout << 1 << endl;
        return;
    }
    long long jokes = a1;
    long long offset = 0;
    jokes += (2 * min(a2, a3));
    long long x = min(a2, a3);
    a2 -= x;
    a3 -= x;
    x = min(a1, a2);
    jokes += x;
    a1 -= x;
    a2 -= x;
    x = min(a1, a3);
    jokes += x;
    a1 -= x;
    a3 -= x;
    x = min(a1, a4);
    jokes += x;
    a1 -= x;
    a4 -= x;
    if (a2 > 0 || a3 > 0 || a4 > 0)
    {
        offset += 1;
    }
    cout << jokes+offset << endl;
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