#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, a, b;
    cin >> n >> a >> b;
    if(b==1){
        cout << "YES" << endl;
        return;
    }
    if(a==1){
        if((n-1)%b==0){
            cout << "YES" << endl;
            return;
        }
        cout << "NO" << endl;
        return;
    }
    long long offset = 1;
    while(offset<n){
        long long x = n - offset;
        if (x % b == 0)
        {
            cout << "YES" << endl;
            return;
        }
        offset *= a;
    }
    if(offset==n){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
    return;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}