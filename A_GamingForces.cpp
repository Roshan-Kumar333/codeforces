#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long count1 = 0;
    long long count2 = 0;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        if(a[i]==1){
            count1++;
        }
        if(a[i]==2){
            count2++;
        }
    }
    long long free = count1 / 2;
    cout << n - free << endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}