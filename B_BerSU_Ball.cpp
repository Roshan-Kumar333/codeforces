#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,m;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    cin >> m;
    vector<long long> b(m);
    for (long long i = 0; i < m;i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    long long i = 0;
    long long j = 0;
    long long ans = 0;
    while(i<n && j<m){
        long long x = abs(a[i] - b[j]);
        if(x<=1){
            ans++;
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }
    cout<<ans<<endl;
    return;
}
int main(){
    solve();
    return 0;
}