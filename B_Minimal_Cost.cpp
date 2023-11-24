#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, u, v;
    cin >> n >> u >> v;
    vector<long long> a;
    long long element;
    for (long long i = 0; i < n;i++){
        cin >> element;
        a.push_back(element);
    }
    long long difference =0;
    for (long long i = 1; i < n;i++){
        difference = max(difference, abs(a[i] - a[i - 1]));
    }
    if (difference==0){
        long long res = v + min(v, u);
        cout << res << endl;
        return;
    }
    else if(difference==1){
        cout << min(v, u) << endl;
        return;
    }
    else{
        cout << 0 << endl;
        return;
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