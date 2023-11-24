#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    string s;
    cin >> s;
    // string ans = "";
    vector<int> digits;
    for (long long i = 0; i < n;i++){
        digits.push_back(int((int)(s[i]) - 48));
    }
    vector<int> ans(n);
    long long offset = 0;
    if(digits[0]<9){
        for (long long i = 0; i < n;i++){
            ans[i]=(9 - digits[i]);
        }
    }
    else{
        for (long long i = n - 1; i >= 0;i--){
            digits[i] += offset;
            if(digits[i]==0){
                ans[i] = 1;
                offset = 0;
            }
            else if(digits[i]==1){
                ans[i] = 0;
                offset = 0;
            }
            else{
                ans[i] = 11 - digits[i];
                offset = 1;
            }
        }
    }
    for (long long i = 0; i < n;i++){
        cout << ans[i];
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