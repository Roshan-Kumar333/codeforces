#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    string s;
    cin >> s;
    vector<long long> a;
    for (long long i = 0; i < n;i++){
        if(s[i]=='*'){
            a.push_back(i);
        }
    }
    long long index = a.size() / 2;
    long long offset = 1;
    long long ans = 0;
    for (long long i = index-1; i >= 0;i--){
        ans += (a[index] - a[i]) - offset;
        offset++;
    }
    offset = 1;
    for (long long i = index + 1; i < a.size();i++){
        ans += (a[i] - a[index]) - offset;
        offset++;
    }
    cout << ans << endl;
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