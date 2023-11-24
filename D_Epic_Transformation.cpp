// #include<bits/stdc++.h>
// using namespace std;
// void solve(){
//     long long n;
//     cin >> n;
//     map<long long, long long> m;
//     vector<long long> a(n);
//     for (long long i = 0; i < n;i++){
//         cin >> a[i];
//         m[a[i]]++;
//     }
//     priority_queue<int> pq;
//     for(auto i:m){
//         pq.push(i.second);
//     }
//     while(pq.size()>1){
//         int x = pq.top();
//         pq.pop();
//         int y = pq.top();
//         pq.pop();
//         x -= 1;
//         y -= 1;
//         // cout << "x = " << x << endl;
//         // cout << "y = " << y << endl;
//         if(x>0)
//             pq.push(x);
//         if(y>0)
//             pq.push(y);
//     }
//     // cout << "xxxx" << endl;
//     if(pq.size()==0){
//         cout << 0 << endl;
//         return;
//     }
//     cout << pq.top() << endl;
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
#include<bits/stdc++.h>
using namespace std;
int totalTrees(int input1,int input2){
    int k = input1;
    int m = input2;
    deque<int> dq;
    dq.push_back(2);
    while(k--){
        int curr = dq.front();
        dq.pop_front();
        int val = (curr + 1) % m;
        for (int i = 0; i < val;i++){
            dq.push_back(i);
        }
    }
    return dq.size();
}
bool myCmp(int*a,int*b){
    return a[0] < b[0];
}
int coverage(int input1,int **input2){
    int ans = 0;
    sort(input2, input2 + input1, myCmp);
    int start = input2[0][0];
    int end = input2[0][1];
    for (int i = 1; i < input1; i++)
    {
        if(input2[i][0]<=end){
            end = input2[i][1];
        }
        else{
            ans += end - start;
            start = input2[i][0];
            end = input2[i][1];
        }
    }
    ans += end - start;
    return ans;
}
void solve(){
    int n;
    cin >> n;

}
int main(){
    return 0;
}