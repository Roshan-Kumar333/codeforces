#include<bits/stdc++.h>
using namespace std;
void print(vector<long long>&a){
    for(auto i:a){
        cout << i << " ";
    }
    cout << endl;
}
void solve(){
    long long n;
    cin >> n;
    long long x = n / 2;
    vector<long long> a(n);
    for (long long i = 0; i < n-1;i+=2){
        a[i] = x;
        x--;
    }
    x = n;
    if(n%2!=0){
        a[n - 1] = n;
        x--;
    }
    for (long long i = 1; i < n;i+=2){
        a[i] = x;
        x--;
    }
    print(a);
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