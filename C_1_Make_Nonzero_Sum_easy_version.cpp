// #include<bits/stdc++.h>
// using namespace std;
// void solve(){
//     long long n;
//     cin >> n;
//     vector<long long> a(n);
//     vector<long long> b(n);
//     long long totalSumA = 0;
//     long long totalSumB = 0;
//     for (long long i = 0; i < n;i++){
//         cin >> a[i];
//         if(i%2!=0){
//             a[i] = 0 - a[i];
//         }
//         totalSumA += a[i];
//     }
//     for (long long i = 1; i < n;i++){
//         b[i] = 0 - a[i];
//         totalSumB += b[i];
//     }
//     long long currSumA = a[0];
//     long long currSumB = b[0];
//     for (long long i = 1; i < n-1;i++){
//         if(i%2!=0){
//             if(currSumA+(totalSumB-currSumB)==0){
//                 cout << 2 << endl;
//                 cout << 1 << " " << i << endl;
//                 cout << i + 1 << " " << n << endl;
//                 return;
//             }
//         }
//         else{
//             if((currSumA+(totalSumA-currSumA))==0){
//                 cout << 2 << endl;
//                 cout << 1 << " " << i << endl;
//                 cout << i + 1 << " " << n << endl;
//                 return;
//             }
//         }
//         currSumA += a[i];
//         currSumB += b[i];
//     }
//     cout << -1 << endl;
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
void solve(){
    int q;
    cin >> q;
    deque<int> dq;
    bool flag = true;
    int sum = 0;
    while(q--){
        int i;
        cin >> i;
        if(i==1){
            int marks;
            cin >> marks;
            if(flag){
                dq.push_back(marks);
            }
            else{
                dq.push_front(marks);
            }
            sum += marks;
        }
        else if(i==2){
            if(dq.size()>0){
                if (flag)
                {
                    sum -= dq.back();
                    dq.pop_back();
                }
                else
                {
                    sum -= dq.front();
                    dq.pop_front();
                }
            }
        }
        else if(i==3){

            if(dq.size()>0){
                if (flag)
                {
                    sum += 5;
                    int x = dq.back();
                    dq.pop_back();
                    x += 5;
                    dq.push_back(x);
                }
                else
                {
                    sum += 5;
                    int x = dq.front();
                    dq.pop_front();
                    x += 5;
                    dq.push_front(x);
                }
            }
        }
        else if(i==4){
            if(dq.size()>0){
                if (flag)
                {
                    sum -= 5;
                    int x = dq.back();
                    dq.pop_back();
                    x -= 5;
                    dq.push_back(x);
                }
                else
                {
                    sum -= 5;
                    int x = dq.front();
                    dq.pop_front();
                    x -= 5;
                    dq.push_front(x);
                }
            }
        }
        else{
            flag = !flag;
        }
    }
    cout << sum << endl;
}
int main(){
    solve();
    return 0;
}