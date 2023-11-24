// #include<bits/stdc++.h>
// using namespace std;
// void solve(){
//     long long n, m;
//     cin >> n >> m;
//     long long *a = new long long[n];
//     vector<long long> d;
//     for (long long i = 0; i < n;i++){
//         cin >> a[i];
//         if(a[i]%m!=0){
//             d.push_back(a[i]);
//             continue;
//         }
//         long long x = a[i];
//         while(x%m==0){
//             x /= m;
//         }
//         long long b = a[i] / x;
//         while(b--){
//             d.push_back(x);
//         }
//     }
//     long long k;
//     cin >> k;
//     long long index = 0;
//     long long *b = new long long[k];
//     for (long long i = 0; i < k;i++){
//         cin >> b[i];
//         if(b[i]==d[index]){
//             index++;
//             continue;
//         }
//         else if(b[i]{

//         }
//     }
// }
// int main(){
//     long long t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
class emp{
    int id;
    static int n;
    public:
    void setData(){
        cout << "Enter the employee id " << endl;
        cin >> id;
        n++;
    }
    void getData(){
        cout << "This is employee number " << n << endl;
    }
    static void getN(){
        cout << "The value of n is " << n << endl;
    }
};
int emp::n;
int main(){
    emp roshan, chandra, rishi;
    roshan.setData();
    roshan.getData();
    roshan.getN();
    emp::getN();
    chandra.setData();
    chandra.getData();
    rishi.setData();
    rishi.getData();
    emp *a = new emp[100];

    return 0;
}