#include<bits/stdc++.h>
using namespace std;
void solve(){
    double n;
    cin >> n;
    long long element;
    vector<long long> a;
    map<long long, long long> m;
    long long sum = 0;
    for (long long i = 0; i < n;i++){
        cin >> element;
        a.push_back(element);
        sum += a[i];
        m[a[i]]++;
    }
    double mean = sum / n;
    double required = mean * 2;
    long long req = (long long)required;
    if(req<required){
        cout << 0 << endl;
        return;
    }
    long long ans = 0;
    for (long long i = 0; i < n;i++){
        if(m.count(req-a[i])){
            ans += m[req - a[i]];
        }
        if(req-a[i]==a[i]){
            ans -= 1;
        }
    }
    cout << ans/2 << endl;
}
int main(){
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}