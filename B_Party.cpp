#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m;
    cin >> n >> m;
    vector<long long> a(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    vector < pair<long long, long long>> b(m);
    map<long long, long long> c;
    for (long long i = 0; i < m;i++){
        cin >> b[i].first;
        cin >> b[i].second;
        c[b[i].first]++;
        c[b[i].second]++;
    }
    vector<long long> x;
    if(m%2==0){
        cout << 0 << endl;
        return;
    }
    long long ans = INT_MAX;
    for(auto i:c){
        if(i.second%2!=0){
            ans = min(ans, a[i.first - 1]);
        }
        else{
            x.push_back(a[i.first-1]);
        }
    }
    if(x.size()<2){
        cout << ans << endl;
        return;
    }
    ans = min(ans, (x[0] + x[1]));
    cout << ans << endl;
    return;
}
int main(){
    long long t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}