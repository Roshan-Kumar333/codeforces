#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<bool> c(n + 1,true);
    vector<vector<long long>> a;
    long long ans = 0;
    for (long long i = 0; i < n;i++){
        long long k;
        cin >> k;
        vector<long long> b(k);
        bool flag = true;
        for (long long j = 0; j < k;j++){
            cin >> b[j];
            if(flag && c[b[j]]){
                c[b[j]] = false;
                flag = false;
            }
        }
        if(flag){
            ans = i + 1;
        }
        a.push_back(b);
    }
    if(ans==0){
        cout << "OPTIMAL" << endl;
        return;
    }
    cout << "IMPROVE" << endl;
    for (long long i = n; i >= 1;i--){
        if(c[i]){
            cout << ans << " "<<i << endl;
            return;
        }
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