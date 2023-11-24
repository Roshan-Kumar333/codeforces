#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,k;
    cin >> n;
    cin >> k;
    long long *a = new long long[n];
    long long count = 0;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    for (long long i = 1; i < n-1;i++){
        if(a[i]>a[i-1]+a[i+1]){
            count++;
        }
    }
        if (k == 1)
        {
            if (n % 2 == 0)
            {
                n--;
            }
            cout << n / 2 << endl;
            return;
        }
    cout << count << endl;
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