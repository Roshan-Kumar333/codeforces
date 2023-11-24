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
    long long end = 0;
    long long ans = 0;
    while(end<n){
        long long x = end - start + 1;
        if(a[end]>=x){
            end++;
        }
        else{
            long long x = end - start;
            ans += x;
            start++;
        }
    }
    for (int i = start; i < end;i++){
        ans += (end - i);
    }
    cout << ans << endl;
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