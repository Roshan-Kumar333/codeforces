#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, x;
    cin >> n >> x;
    long long *a = new long long[n];
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        if(i>0){
            a[i] += a[i - 1];
        }
    }
    long long firstMark=n;
    long long lastMark = n;
    bool flag = true;
    for (long long i = 0; i < n;i++){
        if(a[i]>0&&a[i]%x!=0&&flag){
            firstMark = i;
            lastMark = i;
            flag = false;
        }
        else if(a[i]>0 && a[i]%x!=0){
            lastMark = i;
        }
    }
    if(firstMark==n){
        cout << -1 << endl;
        return;
    }
    cout << max(lastMark + 1, (n - 1 - firstMark)) << endl;
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