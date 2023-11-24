#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long *a = new long long[n];
    long long curr = 1;
    long long res = 1;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        if(i>0){
            if(a[i]<=2*a[i-1]){
                curr++;
            }
            else{
                curr = 1;
            }
        }
        res = max(curr, res);
    }
    cout << res << endl;
    return;
}
int main(){
    solve();
}