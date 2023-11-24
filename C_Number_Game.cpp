// #include<bits/stdc++.h>
// using namespace std;
// long long numberOfOddFactors(long long n){
//     long long count = 0;
//     for (long long i = 2; i * i <= n;i++){
//         if(n%i==0){
//           if(i%2!=0){
//               count++;
//           }
//           if((n/i)%2!=0 && (n/i)!=i){
//               count++;
//           }
//         }
//     }
//     return count;
// }
// void solve(){
//     long long n;
//     cin >> n;
//     if(n%2!=0){
//         if(n==1){
//             cout<<"FastestFinger"<<endl;
//             return;
//         }
//         cout << "Ashishgup" << endl;
//         return;
//     }
//     if(n==2){
//         cout << "Ashishgup" << endl;
//         return;
//     }
//     long long count = numberOfOddFactors(n);
//     // cout
//     if(count==0){
//         cout << "FastestFinger" << endl;
//         return;
//     }
//     if(count==1 && n%4!=0){
//         cout << "FastestFinger" << endl;
//         return;
//     }
//     cout << "Ashishgup" << endl;
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