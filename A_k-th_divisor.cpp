#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, k;
    cin >> n >> k;
    vector<long long> c;
    for (long long i = 1; i * i <= n;i++){
        if(n%i==0){
            c.push_back(i);
            if((n/i)!=i){
                c.push_back(n / i);
            }
        }
    }
    sort(c.begin(), c.end());
    if(k>c.size()){
        cout << -1 << endl;
        return;
    }
    cout << c[k - 1] << endl;
    return;
}
int main(){
    solve();
}