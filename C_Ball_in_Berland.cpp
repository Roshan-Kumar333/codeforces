#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a, b, k;
    cin >> a >> b >> k;
    map<long long, long long> boy;
    map<long long, long long> girl;
    vector<long long> l(k);
    vector<long long> g(k);
    for (long long i = 0; i < k;i++){
        cin >> l[i];
        boy[l[i]]++;
    }
    for (long long i = 0; i < k;i++){
        cin >> g[i];
        girl[g[i]]++;
    }
    long long ans = 0;
    for (long long i = 0; i < k;i++){
        long long x = boy[l[i]] - 1;
        long long y = girl[g[i]] - 1;
        ans += ((k - 1-i) - (x + y));
        boy[l[i]]--;
        girl[g[i]]--;
        if(boy[l[i]]==0){
            boy.erase(l[i]);
        }
        if(girl[g[i]]==0){
            girl.erase(g[i]);
        }
    }
    cout << ans << endl;
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