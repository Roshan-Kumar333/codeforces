#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        if(i>0){
            a[i] += a[i - 1];
        }
    }
    for (long long i = 1;i<n;i++){
        long long x = a[i] - a[i - 1];
        if(x==0){
            continue;
        }
        if((a[i-1]-x)>=0){
            // cout << a[i] << " " << a[i - 1] << endl;
            cout << -1 << endl;
            return;
        }
    }
    for(auto i:a){
        cout << i << " ";
    }
    cout << endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve(); 
    }
    return 0;
}