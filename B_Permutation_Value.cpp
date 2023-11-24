#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long start = 1;
    long long end = n;
    bool flag = true;
    for (long long i = 0;i<n;i++){
        if(flag){
            cout << start;
            start++;
            flag = !flag;
        }
        else{
            cout << end;
            end--;
            flag = !flag;
        }
        if(i<n-1){
            cout << " ";
        }
    }
    cout << endl;
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