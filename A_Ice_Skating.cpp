#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<pair<long long, long long>> a(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i].first;
        cin >> a[i].second;
    }
    sort(a.begin(), a.end());
    long long count = 0;
    if(n==1){
        cout << count << endl;
        return;
    }
    set<long long> s;
    s.insert(a[0].second);
    for (long long i = 1; i < n;i++){
        if(a[i].first!=a[i-1].first && s.find(a[i].second)==s.end()){
            count++;
        }
        s.insert(a[i].second);
    }
    cout << count << endl;
    return;
}
int main(){
    solve();
    return 0;
}