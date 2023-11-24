#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,m;
    cin >> n >> m;
    vector<string> a(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    for (long long i = 0; i < n;i++){
        for (long long j = 0; j < m;j++){
            if(a[i][j]=='-'){
                continue;
            }
            long long x = i + j + 2;
            if(x%2==0){
                a[i][j] = 'B';
            }
            else{
                a[i][j] = 'W';
            }
        }
    }
    for(auto i:a){
        cout << i << endl;
    }
    return;
}
int main(){
    solve();
    return 0;
}