#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m;
    cin >> n >> m;
    vector<long long>a(n);
    vector<long long> p(m);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    set<long long> s;
    for (long long i = 0; i < m;i++){
        cin >> p[i];
        s.insert(p[i]-1);
    }
    for (long long i = 0; i < n - 1;i++){
        long long index = i;
        while(index>=0 && s.find(index)!=s.end()&& a[index]>a[index+1]){
            swap(a[index], a[index + 1]);
            index--;
        }
    }
    for (long long i = 0; i < n - 1;i++){
        if(a[i]>a[i+1]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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