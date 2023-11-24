#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long *a = new long long[n];
    set<long long> s;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        if(a[i]%2==0){
            s.insert(a[i]);
        }
    }
    stack<long long> s1;
    for(auto i:s){
        s1.push(i);
    }
    long long ans = 0;
    // cout << s1.size() << endl;
    while(s1.empty()==false){
        // cout << s1.top() << endl;
        long long count = 1;
        s1.top() /= 2;
        // cout << s1.top() << endl;
        while(s.find(s1.top())==s.end() && s1.top()%2==0){
            // cout << "s1.top() " << s1.top() << endl;
            s1.top() /= 2;
            count++;
        }
        ans += count;
        s1.pop();
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