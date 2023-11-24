#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long *e = new long long[n];
    map<long long, long long> m;
    for (long long i = 0; i < n;i++){
        cin >> e[i];
        m[e[i]]++;
    }
    long long offset = 0;
    long long res = 0;
    for(auto i:m){
        i.second += offset;
        res += (i.second / i.first);
        offset =(i.second % i.first);
    }
    cout << res << endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}