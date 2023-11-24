#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m;
    cin >> n >> m;
    vector<vector<long long>> a;
    for (long long i = 0;i<n;i++){
        vector<long long> c;
        for (long long j = 0; j < m;j++){
            long long temp;
            cin >> temp;
            c.push_back(temp);
        }
        a.push_back(c);
    }
    for (long long i = 0; i < n;i++){
        sort(a[i].begin(), a[i].end());
    }
    
}
int main(){
return 0;
}