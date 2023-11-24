#include<bits/stdc++.h>
using namespace std;

int main(){
    // long long n, q;
    // cin >> n;
    // cin >> q;
    // string s;
    // cin >> s;
    // long long *a = new long long[n];
    // a[0] = int(s[0] - 96);
    // for (long long i = 1; i < n;i++){
    //     a[i] = a[i - 1] + (int)(s[i] - 96);
    // }
    //     while (q--)
    //     {
    //         long long l, r;
    //         cin >> l >> r;
    //         if(l>1){
    //             cout << a[r - 1] - a[l - 2] << endl;
    //         }
    //         else{
    //             cout << a[r - 1] << endl;
    //         }
    //     }
    long long q = 1000000007;
    long long b = 100000;
    long long a = 1;
    for (int i = 0; i < 20; i++)
    {
        a = (a * b) % q;
    }
        cout << a % q << endl;
    return 0;
}