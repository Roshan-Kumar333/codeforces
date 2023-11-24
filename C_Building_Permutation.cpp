#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long *a = new long long[n];
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a, a + n);
    long long curr = 1;
    long long ans = 0;
    for (long long i = 0;i<n;i++){
        if(a[i]<curr){
            ans += curr - a[i];
        }
        else{
            ans += a[i] - curr;
        }
        curr++;
    }
    cout << ans << endl;
    return;
}
int main(){
    solve();
    return 0;
}