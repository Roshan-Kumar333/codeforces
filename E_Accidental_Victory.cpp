#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> c(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        c[i] = a[i];
    }
    sort(a.begin(), a.end());
    vector<long long> b(n);
    b[0] = a[0];
    for (long long i = 1; i < n;i++){
        b[i] = b[i - 1] + a[i];
    }
    // for(auto i:b){
    //     cout << i << " ";
    // }
    // cout << endl;
    long long x = -1;
    for (long long i = 0; i < n - 1;i++){
        if(b[i]<a[i+1]){
            x = a[i];
        }
    }
    if(x==-1){
        cout << n << endl;
        for (long long i = 1; i <= n;i++){
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    vector<long long> ans;
    for (long long i = 0; i < n;i++){
        if(c[i]>x){
            ans.push_back(i + 1);
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(auto i:ans){
        cout << i << " ";
    }
    cout << endl;
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