#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m;
    cin >> n >> m;
    string a;
    cin >> a;
    string b;
    cin >> b;
    long long i = 0;
    while(i<n && a[i]!=b[0]){
        i++;
    }
    long long x = n - i;
    x = m - x-1;
    i += x;
    x = 0;

    while(i<n){
        if(a[i]!=b[x]){
            cout << "NO" << endl;
            return;
        }
        i++;
        x++;
    }
    cout << "YES" << endl;
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