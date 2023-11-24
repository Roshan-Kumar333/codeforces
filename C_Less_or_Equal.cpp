#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, k;
    cin >> n >> k;
    long long *a = new long long[n];
    map<long long, long long> m;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        m[a[i]]++;
    }
    for(auto i:m){
        if(k==0){
            if(i.first==1){
                cout << -1 << endl;
                return;
            }
            else{
                cout << i.first - 1 << endl;
                return;
            }
        }
        k -= i.second;
        if(k==0){
            cout << i.first << endl;
            return;
        }
        else if(k<0){
            cout << -1 << endl;
            return;
        }
    }
    cout <<"1000000000"<< endl;
    return;
}
int main(){
    solve();
    return 0;
}