#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, q;
    cin >> n >> q;
    vector<long long> a(n);
    long long sum = 0;
    long long evenCount = 0;
    long long oddCount = 0;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        sum += a[i];
        if(a[i]%2==0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
    while(q--){
        long long type, x;
        cin >> type >> x;
        if(type==0){
            sum += (evenCount * x);
            if(x%2!=0){
                oddCount += evenCount;
                evenCount = 0;
            }
        }
        else{
            sum += (oddCount * x);
            if(x%2!=0){
                evenCount += oddCount;
                oddCount = 0;
            }
        }
        cout << sum << endl;
    }
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}