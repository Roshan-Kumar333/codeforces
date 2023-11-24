#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    long long k = n / 4;
    long long sumA = 0;
    long long sumB = 0;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    for (long long i = 0; i < n;i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (long long i = k; i < n;i++){
        sumA += a[i];
        sumB += b[i];
    }
    long long ans = 0;
    long long bk = k-1;
    long long index = k;
    while(sumA<sumB){
        sumA += 100;
        ans++;
        if((n+ans)%4==0){
            sumA -= a[index];
            index++;
        }
        else{
            if(bk>=0){
                sumB += b[bk];
            }
            bk--;
        }
    }
    cout << ans << endl;
    return;
}
// bool isPossible(vector<long long>a, vector<long long>b,long long n, long long k){
//     long long sumA = 0;
//     long long sumB = 0;

// }
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}