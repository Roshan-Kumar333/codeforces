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
    long long start = 0;
    long long ans = 1;
    for (long long i = 1; i < n;i++){
        if(a[i]-a[start]<=5){
            ans = max(ans, (i - start) + 1);
        }
        else{
            start++;
        }
    }
    cout << ans << endl;
}
int main(){
    solve();
    return 0;
}