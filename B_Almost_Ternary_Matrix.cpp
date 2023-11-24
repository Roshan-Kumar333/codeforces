#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m;
    cin >> n >> m;
    long long a[n][m];
    a[0][0] = 1;
    bool flag = false;
    for (long long j = 1; j < m; j += 2)
    {
        if(flag){
            a[0][j] = 1;
            a[0][j + 1] = 1;
            flag = !flag;
        }
        else{
            a[0][j] = 0;
            a[0][j + 1] = 0;
            flag = !flag;
        }
    }
    // if(a[0][m-1]==0){
    //     for (long long j = 0; j < m;j++){
    //         a[0][j] = !a[0][j];
    //     }
    // }
    for (long long i = 1; i < n;i++){
        for (long long j = 0; j < m;j++){
            a[i][j] = !(a[i - 1][j]);
        }
    }
        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
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