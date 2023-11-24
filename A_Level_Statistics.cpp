#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    bool flag = true;
    long long *p = new long long[n];
    long long *c = new long long[n];
    for (long long i = 0; i < n;i++){
        cin >> p[i];
        cin >> c[i];
        if(i>0){
            if(p[i]<p[i-1] || c[i]<c[i-1]){
                flag = false;
            }
            else if(p[i]==p[i-1] && c[i]>c[i-1]){
                flag = false;
            }
            else if((p[i]-p[i-1])<(c[i]-c[i-1])){
                flag = false;
            }
        }
    }
    if(p[0]<c[0]){
        flag = false;
    }
    if(flag){
        cout << "YES" << endl;
        return;
    }
    else{
        cout << "NO" << endl;
        return;
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