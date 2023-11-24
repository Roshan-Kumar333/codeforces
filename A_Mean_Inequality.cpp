#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long *a = new long long[2*n];
    for (long long i = 0; i < 2*n;i++){
        cin >> a[i];
    }
    sort(a, a + 2*n);
    long long start = 0;
    long long end = 2*n - 1;
    while(start<=end){
        if(start!=end){
            cout << a[start] << " " << a[end] << " ";
        }
        else{
            cout << a[start] << " ";
        }
        start++;
        end--;
    }
    cout << endl;
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