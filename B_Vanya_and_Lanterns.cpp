#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, l;
    cin >> n >> l;
    vector<double> a(n);
    for (long long i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    double d = a[0];
    for (long long i = 1; i < n;i++){
        d = max(d, (a[i] - a[i - 1]));
    }
    double c = 2;
    d = d / 2;
    double e = l - a[n - 1];
    e = max({e, a[0], d});
    cout << fixed<<setprecision(10)<<e << endl;
    return;
}
int main(){
    solve();
    return 0;
}