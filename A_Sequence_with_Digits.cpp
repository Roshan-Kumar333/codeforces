#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a, k;
    cin >> a >> k;
    while(--k){
        long long maxi = INT_MIN;
        long long mini = INT_MAX;
        long long x = a;
        while(x){
            maxi = max(maxi, x % 10);
            mini = min(mini, x % 10);
            x /= 10;
        }
        if(mini==0){
            break;
        }
        else{
            a += (maxi * mini);
        }
    }
    cout << a << endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}