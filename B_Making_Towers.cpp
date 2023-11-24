#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n+1);
    map<long long, long long> m;
    vector<long long> ans(n + 1,0);
    for (long long i = 1; i < n+1;i++){
        cin >> a[i];
        if(m.find(a[i])!=m.end()){
            long long x = i - m[a[i]]-1;
            if(x%2==0){
                ans[a[i]]++;
                m[a[i]] = i;
            }
        }
        else{
            m[a[i]] = i;
            ans[a[i]]++;
        }
    }
    for (long long i = 1; i < n + 1;i++){
        cout <<ans[i] << " ";
    }
    cout << endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}