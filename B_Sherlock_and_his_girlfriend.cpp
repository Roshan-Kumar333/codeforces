#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    // bool a[n + 2];
    vector<bool> a(n + 2, true);
    for (long long i = 2; i < n + 2;i++){
        if(a[i]){
            for (long long j = 2 * i; j < n+2;j+=i){
                a[j] = false;
            }
        }
    }
    // for(auto i:a){
    //     cout << i << " ";
    // }
    // cout << "xxx" << endl;
    if(n>2){
        cout << 2 << endl;
    }
    else{
        cout << 1 << endl;
    }
    for (long long i = 2; i < n + 2;i++){
        if(a[i]){
            cout << 1 << " ";
        }
        else{
            cout << 2 << " ";
        }
        // cout << a[i] << " ";
    }
    cout << endl;
    return;
}
int main(){
    solve();
    return 0;
}