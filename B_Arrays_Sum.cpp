#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    long long count = 1;
    bool isZero = false;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        if(a[i]==0){
            isZero = true;
        }
        if(i>0 && a[i]!=a[i-1]){
            count++;
        }
    }
    if(count==1 || count<=k){
        cout << 1 << endl;
        return;
    }
    if(k==1){
        cout << -1 << endl;
        return;
    }
    k--;
    long long x = count / k;
    if(count%k>1){
        x++;
    }
    else if(k==1){
        x--;
    }
    cout << x << endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}