#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,m;
    cin >> n>>m;
    long long ans = n;
    vector<pair<long long, long long>> a(m);
    for (long long i = 0; i < m;i++){
        cin >> a[i].first;
        cin >> a[i].second;
        if(a[i].second>a[i].first){
            swap(a[i].second, a[i].first);
        }
        // cout << "here" << endl;
    }
    sort(a.begin(), a.end());
    
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}