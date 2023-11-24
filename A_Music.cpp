#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long mini = INT_MAX;
    long long maxi = INT_MIN;
    map<long long, long long> m;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        m[a[i]]++;
        if(a[i]<mini){
            mini = a[i];
        }
        if(a[i]>maxi){
            maxi = a[i];
        }
    }
    long long x = m[mini];
    long long y = m[maxi];
    if(mini==maxi){

        cout << x*(x-1) << endl;
        return;
    }
    x *= y;
    cout << 2 * x << endl;
    return;
}
int main(){
    long long t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}