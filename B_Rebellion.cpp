#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    long long start = 0;
    long long end = n - 1;
    long long ans = 0;
    while(start<end){
        if(a[start]==0){
            start++;
        }
        if(a[end]==1){
            end--;
        }
        if(a[start]==1 && a[end]==0 && start<end){
            ans++;
            start++;
            end--;
        }
    }
    cout <<ans<< endl;
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