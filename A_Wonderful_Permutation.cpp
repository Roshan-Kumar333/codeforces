#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, k;
    cin >> n >> k;
    vector<long long>a(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    long long count = 0;
    unordered_set<long long> s;
    for (long long i = 0; i < k;i++){
        s.insert(a[i]);
    }
    for (long long i = 0; i < k;i++){
        s.erase(i + 1);
    }
    cout<<s.size()<<endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}