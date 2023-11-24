#include<bits/stdc++.h>
using namespace std;
bool myCmp(long long a,long long b){
    return a > b;
}
long long gcd(long long a, long long b)
{
    return b == 0 ? a : gcd(b, a % b);
}
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end(),myCmp);
    long long till = a[0];
    for (long long i = 1; i < n;i++){
        long long g = gcd(till, a[i]);
        if(g!=a[i] && g>=2){
            // cout << g <<" "<<a[i] <<endl;
            cout << "YES" << endl;
            return;
        }
        till = a[i];
    }
    cout << "NO" << endl;
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