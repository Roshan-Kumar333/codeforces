// #include<bits/stdc++.h>
// using namespace std;
// long long help(string s){
//     long long count = 0;
//     for(char c :s){
//         if(c=='a'){
//             count++;
//         }
//     }
//     return count;
// }
// void solve(){
//     long long q;
//     cin >> q;
//     long long sLength = 1;
//     long long tLength = 1;
//     long long sA = 1;
//     long long tA = 1;
//     while(q--){
//         long long d, k;
//         cin >> d >> k;
//         string x;
//         cin >> x;
//         long long xLen = x.size();
//         long long aLen = help(x);
//         if(d==1){
//             sLength += (xLen*k);
//             sA +=(aLen*k);
//         }
//         else{
//             tLength += (xLen*k);
//             tA += (aLen * k);
//         }
//         if(tA<tLength){
//             cout << "YES" << endl;
//         }
//         else{
//             if(sA==sLength && sA<tA){
//                 cout << "YES" << endl;
//             }
//             else{
//                 cout << "NO" << endl;
//             }
//         }
//     }
//     return;
// }
// int main(){
//     long long t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// vector<bool> sieve(100001, true);
// void fillSieve(){
//     for (long long i = 2; i <= 100001;i++){
//         if(sieve[i]){
//             for (long long j = 2 * i; j <= 100001;j+=i){
//                 sieve[j] = false;
//             }
//         }
//     }
// }
// bool countPrimeFactors(long long n){
//     long long count = 0;
//     if(n%2==0){
//         count++;
//         while(n%2==0){
//             n /= 2;
//         }
//     }
//     if(n%3==0){
//         while(n%3==0){
//             n /= 3;
//         }
//         count++;
//     }
//     for (long long i = 5; i * i <= n;i+=6){
//         if(n%i==0){
//             if(sieve[i]){
//                 count++;
//             }
//             while(n%i==0){
//                 n /= i;
//             }
//         }
//         if(n%(i+2)==0){
//             if(sieve[i+2]){
//                 count++;
//             }
//             while(n%(i+2)==0){
//                 n /= (i + 2);
//             }
//         }
//     }
//     if(n>1){
//         count += 1;
//     }
//     return count == 2;
// }
// void solve(){
//     long long l, r;
//     cin >> l >> r;
//     for (long long i = l; i <= r;i++){
//         if(countPrimeFactors(i)){
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }
// int main(){
//     solve();
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
long long pSmooth(long long n){
    long long ans=INT_MIN;
    if(n%2==0){
        while(n%2==0){
            n /= 2;
        }
        ans = max(ans, (long long)2);
    }
    if(n%3==0){
        while(n%3==0){
            n /= 3;
        }
        ans = max(ans, (long long)3);
    }
    for (long long i = 5; i * i <= n;i+=6){
        if(n%i==0){
            while(n%i==0){
                n /= i;
            }
            ans = max(ans, i);
        }
        if(n%(i+2)==0){
            while(n%(i+2)==0){
                n /= (i + 2);
            }
            ans = max(ans, i + 2);
        }
    }
    if(n>4){
        ans = max(ans, n);
    }
    return ans;
}
long long pJagged(long long n){
    long long ans = INT_MAX;
    if (n % 2 == 0)
    {
        while (n % 2 == 0)
        {
            n /= 2;
        }
        ans = min(ans, (long long)2);
    }
    if (n % 3 == 0)
    {
        while (n % 3 == 0)
        {
            n /= 3;
        }
        ans = min(ans, (long long)3);
    }
    for (long long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
            }
            ans = min(ans, i);
        }
        if (n % (i + 2) == 0)
        {
            while (n % (i + 2) == 0)
            {
                n /= (i + 2);
            }
            ans = min(ans, i + 2);
        }
    }
    if (n > 4)
    {
        ans = min(ans, n);
    }
    return ans;
}
void solve(){
    long long n;
    cin>>n;
    vector<long long> st(n);
    vector<long long> en(n);
    vector<long long> p(n);
    for (long long i = 0; i < n;i++){
        cin>>st[i]
    }
}
int main(){
    solve();
    return 0;
}