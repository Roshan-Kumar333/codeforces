#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long *a = new long long[n];
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    long long x = pow(2, n);
    for (long long i = 0; i < x;i++){
        long long sum1 = 0;
        long long sum2 = 0;
        for (long long j = 0; j < n;j++){
            if((i&(1<<j))>0){
                sum1 += a[j];
            }
            else{
                sum2 += a[j];
            }
        }
        // cout << "sum1 = " << sum1 << " sum2 = " << sum2 << endl;
        // if(sum1==sum2){
        //     cout << "YES" << endl;
        //     return;
        // }
        if((sum1%360==0 && sum2==0) || (sum2%360==0&& sum1==0)){
            cout << "YES" << endl;
            return;
        }
        if(abs(sum1-sum2)%360==0){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
}
int main(){
    solve();
}