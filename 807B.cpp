// #include<bits/stdc++.h>
// using namespace std;
// void solve(){
//     long long n;
//     cin>>n;
//     long long *a = new long long[n];
//     for (long long i = 0; i < n;i++){
//         cin >> a[i];
//     }
//     bool flag = true;
//     long long ans = 0;
//     long long start = 0;
//     for (long long i = 0; i < n - 1;i++){
//         if(a[i]>0 && flag){
//             start = i;
//             flag = false;
//         }
//         if(a[i]==0 && !flag){
//             a[i] = 1;
//             a[start]--;
//             if(a[start]==0){
//                 start++;
//             }
//             ans++;
//         }
//     }
//     for (long long i = 0; i < n - 1;i++)
//     {
//         ans += a[i];
//     }
//     cout << ans << endl;
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
// #define ll long long
// void solve(){
//     string a, b;
//     cin >> a >> b;
//     ll aCount = 0, bCount = 0;
//     for (char c:a){
//         if(c=='1'){
//             aCount += 1;
//         }
//     }
//     for(char c:b){
//         if(c=='1'){
//             bCount += 1;
//         }
//     }
//     if(aCount==0 && bCount!=0){
//         cout << "NO" << endl;
//         return;
//     }
//     if(aCount==0 && bCount==0 && a.size()<b.size()){
//         cout << "NO" << endl;
//         return;
//     }
//     cout << "YES" << endl;
//     return;
// }
// int main(){
//     solve();
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int mypow(int a, int n){
    int ans = 1;
    while(n){
        if(n%2){
            ans *= a;
        }
        a = a * a;
        n /= 2;
    }
    return ans;
}
int main(){
    cout << mypow(5, 3) << endl;
    cout << mypow(6, 4) << endl;
    return 0;
}