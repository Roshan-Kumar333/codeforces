#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m;
    cin >> n >> m;
    vector<pair<long long, long long>> a(m);
    map<long long, long long> b;
    long long ans = n;
    for (long long i = 0; i < m;i++){
        cin >> a[i].first;
        cin >> a[i].second;
        long long mini = min(a[i].first, a[i].second);
        if(b.find(mini)==b.end()){
            ans--;
        }
        b[mini]++;
    }
    long long q;
    cin >> q;
    while(q--){
        long long x;
        cin >> x;
        if(x==3){
            cout << ans << endl;
        }
        else if(x==1){
            long long u, v;
            cin >> u >> v;
            long long mini = min(u, v);
            if(b.find(mini)==b.end()){
                ans--;
            }
            b[mini]++;
        }
        else if(x==2){
            long long u, v;
            cin >> u >> v;
            long long mini = min(u, v);
            b[mini]--;
            if(b[mini]==0){
                ans++;
                b.erase(mini);
            }
        }
    }
}
int main(){
    solve();
    return 0;
}