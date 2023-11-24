#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m;
    cin >> n >> m;
    bool flag = true;
    vector<vector<long long>>a;
    for (long long i = 0; i < n;i++){
        vector<long long> v;
        for (long long j = 0; j < m;j++){
            long long element;
            cin >> element;
            v.push_back(element);
            long long count = 0;
            if(i-1>=0){
                count++;
            }
            if(i+1<=n-1){
                count++;
            }
            if(j-1>=0){
                count++;
            }
            if(j+1<m){
                count++;
            }
            if(element>count){
                flag = false;
            }
            else{
                v.pop_back();
                v.push_back(count);
            }
        }
        a.push_back(v);
    }
    if(flag==false){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for (long long i = 0; i < n;i++){
        for (long long j = 0; j < m;j++){
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