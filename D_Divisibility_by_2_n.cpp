#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    long long count = 0;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        long long x = a[i];
        while(x%2==0 && count<n){
            count++;
            x /= 2;
        }
        x = i + 1;
        long long c = 0;
        while(x%2==0){
            c++;
            x /= 2;
        }
        b[i]=c;
    }
    sort(b.begin(), b.end());
    long long ans = 0;
    for (int i = n - 1; i >= 0;i--){
        if(count>=n){
            break;
        }
        ans++;
        count += b[i];
    }
    if(count<n){
        cout << -1 << endl;
        return;
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