#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long *a = new long long[n];
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a, a + n);
    // long long x = a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5];
    long long x1 = a[n - 5] * a[n - 4];
    long long x2 = a[n - 3] * a[n - 2];
    long long y1 = a[0] * a[1];
    long long y2 = a[2] * a[3];
    long long x = a[n - 1];
    if(x1>y1){
        x *= x1;
    }
    else{
        x *= y1;
    }
    if(x2>y2){
        x *= x2;
    }
    else{
        x *= y2;
    }
    cout << x << endl;
    return;
}
    int main()
    {
        long long t;
        cin >> t;
        while (t--)
        {
            solve();
        }

        return 0;
}