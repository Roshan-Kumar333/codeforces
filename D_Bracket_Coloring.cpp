// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// bool isPossible(string s,ll n){
//     ll start = 0;
//     ll end = n - 1;
//     while(start<end){
//         swap(s[start], s[end]);
//         start++;
//         end -= 1;
//     }
//     set<ll> s1;
//     set<ll> s2;
//     stack<ll> st;
//     for (ll i = 0; i < n; i++)
//     {
//         if (s[i] == ')')
//         {
//             if (!st.empty())
//             {
//                 s1.insert(i);
//                 s1.insert(st.top());
//                 st.pop();
//             }
//             else
//             {
//                 s2.insert(i);
//             }
//         }
//         else
//         {
//             st.push(i);
//         }
//     }
//     ll temp = st.size() + s2.size();
//     return temp == 0 || temp == n;
// }
// void solve(){
//     ll n;
//     cin >> n;
//     string s;
//     cin >> s;
//     set<ll> s1;
//     set<ll> s2;
//     stack<ll> st;
//     for (ll i = 0; i < n;i++){
//         if(s[i]==')'){
//             if(!st.empty()){
//                 s1.insert(i);
//                 s1.insert(st.top());
//                 st.pop();
//             }
//             else{
//                 s2.insert(i);
//             }
//         }
//         else{
//             st.push(i);
//         }
//     }

//     if(st.size()!=s2.size()){
//         cout << -1 << endl;
//         return;
//     }

//     bool flag = isPossible(s, n);
//     ll temp = st.size() + s2.size();
//     if(temp==n || temp==0 || flag){
//         cout << 1 << endl;
//         for (ll i = 0; i < n;i++){
//             cout << 1 << " ";
//         }
//     }
//     else{
//         cout << 2 << endl;
//         for (ll i = 0; i < n;i++){
//             if(s1.find(i)!=s1.end()){
//                 cout << 1 << " ";
//             }
//             else{
//                 cout << 2 << " ";
//             }
//         }
//     }
//     cout << endl;
//     return;
// }
// int main(){
//     ll t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int minCost(vector<vector<int>>& arr,vector<vector<int>>& dp,int a,int b,int i,int j)
{
    if(i==a||j==b||i<0||j<0){
        return 1e8;
    }
    int drow[] = {-1, 1, 0, 0};
    int dcol[] = {0, 0, -1, 1};
    char matching[]={'U'}
    int cost = INT_MIN;
    for (int it = 0; it < 4;it++){
        int nrow = i + drow[it];
        int ncol = j + dcol[it];

    }
}
void solve(){
    int a, b;
    cin>>a>>b;
    vector<vector<int>> arr(a, vector<int>(b));
    for (int i = 0; i < a;i++){
        for (int j = 0; j < b;j++){
            cin >> arr[i][j];
        }
    }
    vector<vector<int>> dp(a + 1, vector<int>(b + 1));

}
int main(){
    solve();
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> solve(){
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     int count = 0;

//     for(auto cr:s){
//         if(cr=='c'){
//             count += 1;
//         }
//     }
//     vector<int> ans;
//     if(count==n){
//         return {};
//     }
//     if(s[n-1]=='c'){
//         return {n};
//     }
//     return {n, n - 1};
// }
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }