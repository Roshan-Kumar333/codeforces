#include<bits/stdc++.h>
using namespace std;
void solve(long long t){
    long long n;
    cin >> n;
    vector<vector<long long>>a(n, vector<long long>(5));
    for (long long i = 0; i < n;i++){
        for (long long j = 0; j < 5;j++){
            cin >> a[i][j];
        }
    }
    long long winner = 0;
    for (long long i = 1; i < n;i++){
        long long wc = 0;
        for (long long j = 0; j < 5;j++){
            if(a[winner][j]<a[i][j]){
                wc++;
            }
        }
        if(wc<3){
            winner = i;
        }
    }
    for (long long i = 0; i < n;i++){
        if(i==winner){
            continue;
        }
        long long wc = 0;
        for (long long j = 0; j < 5;j++){
            if(a[winner][j]<a[i][j]){
                wc++;
            }
        }
        if (wc < 3)
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << winner + 1 << endl;
    return;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve(t);
    }
    return 0;
}