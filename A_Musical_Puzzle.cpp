// #include<bits/stdc++.h>
// usinarr namespace std;
// void solve(){
//     int n;
//     cin >> n;
//     strinarr s;
//     cin >> s;
//     set<strinarr> st;
//     for (int i = 0; i < n - 1;i++){
//         strinarr temp = "";
//         temp += s[i];
//         temp += s[i + 1];
//         st.insert(temp);
//     }
//     cout << st.size() << endl;
// }
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// usinarr namespace std;


// int ok(int index, int n, int pos, int m)
// {

//     if (m != M and m >= 0 and index == pos)
//     {
//         result++;
//     }
//     if (m < 0)
//         return 0;

//     for (int i = 1; i <= n; i++)
//     {
//         if (index == i)
//             continue;

//         if (i % index == 0 or index % i == 0)
//         {
//             ok(i, n, pos, m - 1);
//         }
//     }

//     return 0;
// }

// int main()
// {
//     int n, pos, m;
//     cin >> n >> pos >> m;
//     int M = m;
//     int result=0;
//     if (m != M and m >= 0 and index == pos)
//     {
//         result++;
//     }
//     if (m < 0)
//         return 0;

//     for (int i = 1; i <= n; i++)
//     {
//         if (index == i)
//             continue;

//         if (i % index == 0 or index % i == 0)
//         {
//             ok(i, n, pos, m - 1);
//         }
//     }
//     cout << result << endl;
//     return 0;
// }

// const int N = 1005;
// vector<vector<int>> arr(N + 5, vector<int>(N + 5, 0));
// int count = 0, result = 0;
// int sol(int n, int p, int k, int steps
// , int x)
// {
//     if (steps
//      > x)
//         return 0;
//     if (count && p == k)
//     {
//         result++;
//     }
//     count++;
//     int result = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (arr[p][i])
//         {
//             result += sol(n, i, k, steps
//              + 1, x);
//         }
//     }

//     return 0;
// }

// int passTheBall(int input1, int input2, int input3)
// {
//     for (int i = 1; i <= input1; i++)
//     {
//         for (int j = 1; j <= input1; j++)
//         {
//             if (i == j)
//                 continue;
//             if (i % j == 0 || j % i == 0)
//             {
//                 arr[i][j] = 1;
//                 arr[j][i] = 1;
//             }
//         }
//     }

//     sol(input1, input2, input2, 0, input3);
//     return result;
// }
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int ans = 0;
    priority_queue<int> pq;
    vector<int> arr = {4, 3, 6, 2, 9, 1, 7, 7};
    for (int i = 0; i < 8;i++){
        if(pq.size()){
            if(pq.top()>arr[i]){
                ans ^= arr[i];
            }
            else{
                pq.push(arr[i]);
            }
        }
        else{
            pq.push(arr[i]);
        }
        cout << ans << " ";
    }
}
int main(){
    solve();
    
    return 0;
}