#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    set<long long> s;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        s.insert(a[i]);
    }
    for (long long i = 1; i <= 1024;i++){
        bool flag = true;
        for (long long j = 0; j < n;j++){
            if(s.find(i^a[j])==s.end()){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
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