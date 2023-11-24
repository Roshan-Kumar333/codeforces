#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long mini1 = INT_MAX;
    long long mini2 = INT_MAX;
    long long maxi1 = INT_MIN;
    long long maxi2 = INT_MIN;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        if(a[i]>maxi1){
            maxi2 = maxi1;
            maxi1 = a[i];
        }
        else if(a[i]>maxi2){
            maxi2 = a[i];
        }
        if(a[i]<mini1){
            mini2 = mini1;
            mini1 = a[i];
        }
        else if(a[i]<mini2){
            mini2 = a[i];
        }
    }
    cout << (maxi1 + maxi2) - (mini1 + mini2) << endl;
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