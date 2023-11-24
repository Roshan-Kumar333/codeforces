#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long x;
    cin >> x;
    long long a, b, c;
    cin >> a >> b >> c;
    vector<long long> ar;
    ar.push_back(a);
    ar.push_back(b);
    ar.push_back(c);
    // cout << ar[x - 1] << endl;
    // cout<<ar[ar[x-]]
    if(ar[x-1]!=0 && ar[ar[x-1]-1]!=0){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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