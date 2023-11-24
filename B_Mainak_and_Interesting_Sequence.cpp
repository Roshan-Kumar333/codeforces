#include<bits/stdc++.h>
using namespace std;
void nOdd(long long n,long long m){
    cout << "YES" << endl;
    vector<long long> a(n);
    long long x = m - (n - 1);
    for (long long i = 0; i < n-1;i++){
        a[i] = 1;
    }
    a[n - 1] = x;
    for(auto i:a){
        cout << i << " ";
    }
    cout << endl;
    return;
}
void nEven(long long n,long long m){
    cout << "YES" << endl;
    vector<long long> a(n);
    long long x = m - (n - 2);
    for (long long i = 0; i < n - 2;i++){
        a[i] = 1;
    }
    a[n - 2] = x / 2;
    a[n - 1] = x / 2;
    for(auto i:a){
        cout << i << " ";
    }
    cout << endl;
    return;
}
void solve(){
    long long n, m;
    cin >> n >> m;
    if(m<n){
        cout << "NO" << endl;
        return;
    }
    if(n%2!=0){
        nOdd(n, m);
        return;
    }
    long long x = m - (n - 2);
    if(x%2!=0){
        cout << "NO" << endl;
        return;
    }
    nEven(n, m);
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