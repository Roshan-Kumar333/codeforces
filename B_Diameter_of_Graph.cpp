#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m, k;
    cin >> n >> m >> k;
    long long x = (n * (n - 1)) / 2;
    if(k==0){
        cout << "NO" << endl;
        return;
    }
    if(m<n-1){
        cout << "NO" << endl;
        return;
    }
    if(m>x){
        cout << "NO" << endl;
        return;
    }
    if(n==1){
        if(k==1){
            cout << "NO" << endl;
            return;
        }
        else{
            cout << "YES" << endl;
            return;
        }
    }
    if(m==x){
        if(k>2){
            cout << "YES" << endl;
            return;
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
    if(k>3){
        cout << "YES" << endl;
        return;
    }
    else{
        cout << "NO" << endl;
        return;
    }
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}