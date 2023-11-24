#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,k;
    cin >> n>>k;
    if(n<k){
        cout << "NO" << endl;
        return;
    }
    if(k==1){
        cout << "YES" << endl;
        cout << n << endl;
        return;
    }
    if(n%2==0){
        if(k%2==0){
            long long x = k - 1;
            cout << "YES" << endl;
            while(x--){
                cout << 1 << " ";
            }
            cout << n - (k - 1) << endl;
            return;
        }
        else{
            long long x = k * 2;
            if(x>n){
                cout << "NO" << endl;
                return;
            }
            else{
                cout << "YES" << endl;
                x = k - 1;
                while(x--){
                    cout << 2 << " ";
                }
                cout << (n - ((k - 1) * 2)) << endl;
                return;
            }
        }
    }
    else{
        if(k%2==0){
            cout << "NO" << endl;
            return;
        }
        else{
            cout << "YES" << endl;
            long long x = k - 1;
            while(x--){
                cout << 1 << " ";
            }
            cout << (n - (k - 1)) << endl;
            return;
        }
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