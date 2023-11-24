#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> o;
    vector<long long> e;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        if(a[i]%2==0){
            e.push_back(i + 1);
        }
        else{
            o.push_back(i + 1);
        }
    }
    if(o.size()==0 || (o.size()==2 && e.size()==1)){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    if(e.size()<2){
        cout << o[0] << " " << o[1] << " " << o[2] << endl;
        return;
    }
    cout << e[0] << " " << e[1] << " " << o[0] << endl;
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