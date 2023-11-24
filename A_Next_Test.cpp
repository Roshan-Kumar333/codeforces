#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long *a = new long long[n];
    vector<bool> ans(3000, true);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        ans[a[i] - 1] = false;
    }
    for (long long i = 0; i < 3000;i++){
        if(ans[i]){
            cout << i + 1 << endl;
            return;
        }
    }
    cout<<3001<<endl;
}
int main(){
    solve();
    return 0;
}