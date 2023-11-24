#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, k;
    cin >> n >> k;
    vector<long long> ans;
    long long *a = new long long[n];
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        if(a[i]%2!=0){
            ans.push_back(i + 1);
        }
    }
    long long x = ans.size() - (k - 1);
    if(ans.size()<k){
        cout << "NO" << endl;
        return;
    }
    if(x%2==0){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for (long long i = 0; i < k-1;i++){
        cout << ans[i] << " ";
    }
    cout << n << endl;
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