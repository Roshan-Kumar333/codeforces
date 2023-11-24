#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, s, t;
    cin >> n >> s >> t;
    long long *p = new long long[n];
    for (long long i = 0; i < n;i++){
        cin >> p[i];
    }
    set<long long> s1;
    stack<long long> s2;
    s1.insert(s);
    s2.push(s);
    long long ans = 0;
    while(s2.top()!=t){
        long long x = p[s2.top() - 1];
        if(s1.find(x)!=s1.end()){
            cout << -1 << endl;
            return;
        }
        s2.push(x);
        s1.insert(x);
        ans++;
    }
    cout << ans << endl;
    return;
}
int main(){

    solve();
    return 0;
}