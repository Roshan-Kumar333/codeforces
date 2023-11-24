#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m;
    cin >> n >> m;
    vector<long long> a(n);
    set<long long> s;
    char *ans = new char[m];
    for (long long i = 0; i < m;i++){
        ans[i] = 'B';
    }
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    for (long long i = 0; i < n;i++){
        if(s.find(a[i])!=s.end()){
            long long x = m + 1 - a[i];
            if(x<a[i]){
                if(ans[x-1]=='B'){
                    ans[x - 1] = 'A';
                }
                else{
                    ans[a[i] - 1] = 'A';
                }
            }
            else{
                if(ans[a[i]-1]=='B'){
                    ans[a[i] - 1] = 'A';
                }
                else{
                    ans[x - 1] = 'A';
                }
            }
            s.erase(a[i]);
        }
        else{
            long long x = m + 1 - a[i];
            if(x<a[i]){
                if(ans[a[i]-1]=='B'){
                    ans[a[i] - 1] = 'A';
                }
                else{
                    ans[x - 1] = 'A';
                }
            }
            else{
                if(ans[x-1]=='B'){
                    ans[x - 1] = 'A';
                }
                else{
                    ans[a[i] - 1] = 'A';
                }
            }
        }
    }
    for (long long i = 0; i < m;i++){
        cout << ans[i];
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