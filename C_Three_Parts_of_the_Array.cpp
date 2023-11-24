#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long *a = new long long[n];
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    long long start = 0;
    long long end = n - 1;
    long long ans = 0;
    long long aSum = a[0];
    long long cSum = a[n - 1];
    if(n==1){
        cout << 0 << endl;
        return;
    }
    while(start<end){
        if(aSum==cSum){
            ans = aSum;
            start++;
            aSum += a[start];
        }
        else if(aSum>cSum){
            end--;
            cSum += a[end];
        }
        else{
            start++;
            aSum += a[start];
        }
    }
    cout << ans << endl;
}
int main(){
    solve();
    return 0;
}