#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n, h;
        cin >> n >> h;
        long long *a = new long long[n];
        for (long long i = 0; i < n;i++){
            cin >> a[i];
        }
        long long x = n;
        long long required = ceil(h / n);
        long long res = required;
        for (long long i = 1; i < n;i++){
            h -= (a[i] - a[i - 1]);
            x--;
            long long c = ceil(h / x);
            required = max(required,c);
        }
        cout << required << endl;
    }
    return 0;
}