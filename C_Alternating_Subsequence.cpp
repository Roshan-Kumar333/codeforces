#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long *a = new long long[n];
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    long long sum = 0;
    bool flag;
    if(a[0]>0){
        flag = true;
    }
    else{
        flag = false;
    }
    for (long long i = 0;i<n;i++){
        // cout << "i = " << i << endl;
        long long maxi = a[i];
        if(flag){
            while(a[i]>0 && i<n){
                // cout << " i = " << i << endl;
                maxi = max(a[i], maxi);
                i++;
            }
            flag = !flag;
        }
        else{
            while(a[i]<0 && i<n){
                // cout << "  i = " << i << endl;
                maxi = max(a[i], maxi);
                i++;
            }
            flag = !flag;
        }
        i--;
        sum += maxi;
    }
        cout << sum << endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}