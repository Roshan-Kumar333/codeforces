#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    for (long long i = 1; i < n;i++){
        b[i] += b[i - 1];
        a[i] += a[i - 1];
    }
    long long m;
    cin >> m;
    // for(auto i:a)
    //     cout << i << " ";
    // cout << endl;
    // for(auto i:b)
    //     cout << i << " ";
    // cout << endl;
    while(m--){
        long long type, l, r;
        cin >> type >> l >> r;
        if(type==1){
            if(l==1){
                cout << a[r - 1] << endl;
            }
            else{
                cout << a[r - 1] - a[l - 2] << endl;
            }
        }
        else{
            if(l==1){
                cout << b[r - 1] << endl;
            }
            else{
                cout << b[r - 1] - b[l - 2] << endl;
            }
        }
    }
    return;
}
int main(){
    solve();
    return 0;
}