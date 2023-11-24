#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long ans = INT_MIN;
    long long mini = INT_MAX;
    long long maxi = INT_MIN;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(auto i:a){
        if(i>maxi){
            maxi = i;
        }
        if(i<mini){
            mini = i;
        }
    }
    if(a[0]==mini || a[n-1]==maxi){
        cout << maxi - mini << endl;
        return;
    }
    for (long long i = 0;i<n;i++){
        long long x = (i + (n - 1)) % n;
        ans = max(ans, a[x] - a[i]);
    }
    for (long long i = 0; i < n - 1;i++){
        ans = max(ans, a[n - 1] - a[i]);
    }
    for (long long i = n - 1; i >= 0;i--){
        ans = max(ans, a[i] - a[0]);
    }
        cout << ans << endl;
    return;
}
int main(){
    long long t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}