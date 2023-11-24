#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long *a = new long long[n];
    set<long long> m;
    long long count = 0;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        m.insert(a[i]);
        if(i>0 && a[i]==a[0]){
            count++;
        }
    }
    if(m.size()==1){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    long long aux;
    for (long long i = 1; i < n;i++){
        if(a[i]!=a[0]){
            cout << 1 << " " << i+1 << endl;
            aux = i + 1;
        }
    }
    for (long long i = 1; i < n;i++){
        if(a[i]==a[0]){
            cout << aux << " " << i + 1 << endl;
        }
    }
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