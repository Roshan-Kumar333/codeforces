#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    set<char> s1;
    char c;
    for (long long i = 0; i < k;i++){
        cin >> c;
        s1.insert(c);
    }
    long long count = 0;
    long long ans = 0;
    for (long long i = 0; i < n;i++){
        if(s1.find(s[i])!=s1.end()){
            count++;
        }
        else{
            long long x = (count * (count + 1)) / 2;
            ans += x;
            count = 0;
        }
    }
    long long x = (count * (count + 1)) / 2;
    ans += x;
    cout << ans << endl;
    return;
}
int main(){
    solve();
    return 0;
}