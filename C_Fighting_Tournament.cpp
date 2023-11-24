#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, q;
    cin >> n>>q;
    vector<long long> a(n);
    unordered_map<long long, long long> m;
    for (long long i = 0; i <n;i++){
        cin >> a[i];
        m[a[i]] = i + 1;
    }
    for (long long i = 0; i < n - 1;i++){
        if(a[i]>a[i+1]){
            a[i + 1] = a[i];
        }
        else{
            a[i] = a[i + 1];
        }
    }
    vector<pair<long long, long long>> b(n + 1, {0, 0});
    long long start = 1;
    long long end = 1;
    for (long long i = 1; i < n;i++){
        if(a[i]!=a[i-1]){
            b[m[a[i-1]]].first=start;
            b[m[a[i-1]]].second = end;
            start = end + 1;
            end = end + 1;
        }
        else{
            end++;
        }
    }
    b[m[n]].first = start;
    b[m[n]].second = end;
    while(q--){
        long long i, k;
        cin >> i >> k;
        if(b[i].first==0){
            cout << 0 << endl;
        }
        else if(i==n){
            long long x = k - b[n].first + 1;
            cout << x << endl;
        }
        else if(k<b[i].first){
            cout << 0 << endl;
        }
        else if(k>b[i].second){
            cout << b[i].second << endl;
        }
        else{
            cout << (b[i].second - b[i].first + 1) << endl;
        }
    }
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