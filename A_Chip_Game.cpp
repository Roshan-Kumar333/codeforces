#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m;
    cin >> n >> m;
    long long x = (n + m);
    if(x%2==0){
        cout << "Tonya" << endl;
        return;
    }
    else{
        cout << "Burenka" << endl;
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