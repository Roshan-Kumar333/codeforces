// #include<bits/stdc++.h>
// using namespace std;
// void fillAns(vector<long long>&ans,char c){
//     if(c=='0' || c=='1'){
//         return;
//     }
//     else if (c == '2'||c=='3' ||c=='5' ||c=='7'){
//         ans.push_back((c - 48));
//     }
//     else if(c=='4'){
//         ans.push_back(3);
//         ans.push_back(2);
//         ans.push_back(2);
//     }
//     else if(c=='6'){
//         ans.push_back(5);
//         ans.push_back(3);
//     }
//     else if(c=='8'){
//         ans.push_back(2);
//         ans.push_back(2);
//         ans.push_back(2);
//         ans.push_back(7);
//     }
//     else if(c=='9'){
//         ans.push_back(7);
//         ans.push_back(3);
//         ans.push_back(3);
//         ans.push_back(2);
//     }
// }
// void solve(){
//     long long n;
//     cin >> n;
//     string s;
//     cin >> s;
//     vector<long long> ans;
//     for (long long i = 0;i<n;i++){
//         fillAns(ans, s[i]);
//         // cout <<"here"<< s[i] << endl;
//     }
//     sort(ans.begin(), ans.end());
//     long long x = ans.size();
//     for (long long i = x - 1; i >= 0;i--){
//         cout << ans[i];
//     }
//     cout << endl;
// }
// int main(){
//     solve();
//     return 0;
// }