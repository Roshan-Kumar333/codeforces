#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n+1);
    for (long long i = 1;i<=n;i++){
        cin >> a[i];
    }
    long long left = k - 1;
    long long right = k + 1;
    long long currLeft = a[k];
    long long currRight = a[k];
    while(left>=1 && right<=n){
        if(currLeft+a[left]<0 && currRight+a[right]<0){
            break;
        }
    }
    if(left==0 || right==n+1){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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