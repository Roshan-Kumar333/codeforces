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
    long long *b = new long long[n];
    long long index = n - 1;
    for (int i = 0; i < n / 2;i++){
        b[index] = a[i];
        index--;
        b[index] = a[n - 1 - i];
        index--;
    }
    if(n%2!=0){
        b[index] = a[n / 2];
    }
    for (long long i = 0; i < n;i++){
        cout << b[i] << " ";
    }
    cout << endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}