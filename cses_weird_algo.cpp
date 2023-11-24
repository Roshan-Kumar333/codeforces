#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    while(true){
        cout << n << " ";
        if(n==1){
            break;
        }
        if(n%2){
            n = n * 3;
            n += 1;
        }
        else{
            n = n / 2;
        }
    }
    cout << endl;
    return;
}
int main(){
    solve();
    return 0;
}