#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m;
    cin >> n >> m;
    long long sum = 0;
    for (long long i = 1; i <= 10;i++){
        long long x = (m * i) % 10;
        sum += x;
    }
    // cout << "sum " << sum << endl;
    long long quotient = n / (10 * m);
    // cout << "quotient " << quotient << endl;
    long long remainder = n % (10 * m);
    // cout << "remainder " << remainder << endl;
    sum = sum * quotient;
    n = n - (10*m * quotient);
    // cout << "n " << n<<endl;
    for (long long i = 1; i*m <= n;i++){
        long long x = (m * i) % 10;
        sum += x;
    }
    cout << sum << endl;
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
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     long long m, n;
//     cin >> m >> n;
//     for (int i = 1; i <= n;i++){
//         cout << m * i << " ";
//         if(i%10==0){
//             cout << endl;
//         }
//     }
//         return 0;
// }