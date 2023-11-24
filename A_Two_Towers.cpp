#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    int count =0;
    reverse(a.begin(), a.end());
    a = a + b;
    cout << a << endl;
    for (int i = 1; i < a.size();i++){
        if(a[i]==a[i-1]){
            count += 1;
        }
    }
    if(count>=2){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    return;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}