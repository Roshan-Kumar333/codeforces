// #include<bits/stdc++.h>
// using namespace std;
// void solve(){
//     long long n;
//     cin >> n;
//     vector<long long> a;
//     map<long long, long long> m;
//     for (long long i = 0; i < n;i++){
//         long long element;
//         cin >> element;
//         a.push_back(element);
//     }
//     while(a[a.size()-1]==a[a.size()-2]){
//             // cout << "array size = " << a.size() << endl;
//             a.pop_back();
//     }
//     for (long long i = 1; i < a.size()-1;i++){
//         if(a[i]!=a[i-1]){
//             m[a[i]]++;
//         }
//     }
//     // cout << "array size = " << a.size() << endl;
//     if (m.size() == 0 && a.size() == 1)
//     {
//         cout << 0 << endl;
//         return;
//      }
//     if(m.find(a[0])==m.end() || m.find(a[n-1])==m.end()){
//         cout << 1 << endl;
//         return;
//     }
//     long long ans = INT_MAX;
//     for(auto i:m){
//         // cout << "i.first = " << i.first << " i.second = " << i.second << endl;
//         ans = min(ans, i.second);
//     }
//     cout << ans + 1 << endl;
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

// --------------------------------------------------------------------------------
// #include <iostream>
// using namespace std;

// int main(int argc, char **argv)
// {
//     cout << "You have entered " << argc
//          << " arguments:"
//          << "\n";

//     for (int i = 0; i < argc; ++i)
//         cout << argv[i] << "\n";

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main(int argc,char*argv[]){
//     cout << argc - 1 << endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class emp{
    void pun();
    void run();
    public:
    int a, b;
    void fun(){
        run();
    }
}c,d;
void emp::run(){
    pun();
    cout << "run faster" << endl;
}
int main(){
    emp roshan;
    roshan.a = 3;
    c.a = 4;
    cout << c.a << endl;
    c.fun();
    return 0;
}