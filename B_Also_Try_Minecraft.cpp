#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m;
    cin >> n >> m;
    vector<long long> a(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    vector<long long> tg(n);
    tg[0] = 0;
    for (long long i = 1; i < n;i++){
        if(a[i]<a[i-1]){
            long long x = a[i - 1] - a[i];
            tg[i] = x + tg[i - 1];
        }
        else{
            tg[i] = tg[i - 1];
        }
    }
    vector<long long> sg(n);
    sg[n - 1] = 0;
    for (long long i = n - 2; i >= 0;i--){
        if(a[i]<a[i+1]){
            long long x = a[i + 1] - a[i];
            sg[i] = x + sg[i + 1];
        }
        else{
            sg[i] = sg[i + 1];
        }
    }
    // for(auto i:tg){
    //     cout << i << " ";
    // }
    // cout << endl;
    // // for(auto i:sg){
    // //     cout << i << " ";
    // }
    while(m--){
        long long s, t;
        cin >> s >> t;
        if(s<t){
            cout << tg[t - 1] - tg[s - 1] << endl;
        }
        else{
            cout << sg[t - 1] - sg[s - 1] << endl;
        }
    }
    return;
}
int main(){
    solve();
    return 0;
}