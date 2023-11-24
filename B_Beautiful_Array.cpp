// #include <bits/stdc++.h>
// using namespace std;
// void printVector(vector<long long> &a)
// {
//     for (auto i : a)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
// }
// void solve()
// {
//     long long n, b, k, s;
//     cin >> n >> k >> b >> s;
//     long long x = b * k;
//     if (s < x)
//     {
//         cout << -1 << endl;
//         return;
//     }
//     vector<long long> ans(n, 0);
//     int index = 0;
//     ans[index] = x;
//     index++;
//     s -= x;
//     if (s == 0)
//     {
//         printVector(ans);
//         return;
//     }
//     long long y = k - 1;
//     n -= 1;
//     x = n * y;
//     if (s > x)
//     {
//         cout << -1 << endl;
//         return;
//     }
//     long long p = s / y;
//     while (p-- && index<(n+1))
//     {
//         ans[index] = y;
//         index++;
//         s -= y;
//     }
//     if(index>=n+1){
//         if(s>0){
//             cout << -1 << endl;
//             return;
//         }
//     }
//     ans[index] = s;
//     printVector(ans);
//     return;
// }
// int main()
// {
//     long long t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void solve(){
//     string s;
//     cin >> s;
//     unordered_map<char, int> m;
//     for(auto i:s){
//         m[i]++;
//     }
//     for(auto i:m){
//         cout << i.first << " " << i.second << endl;
//     }
// }
// int main(){
//     solve();
//     return 0;
// }