// #include<bits/stdc++.h>
// using namespace std;
// void solve(){
//     string s;
//     cin >> s;
//     long long a = 0, b = 0, c = 0;
//     for (int i = 0; i < s.size();i++){
//         if(s[i]=='A'){
//             a++;
//         }
//         else if(s[i]=='B'){
//             b++;
//         }
//         else{
//             c++;
//         }
//     }
//     if(a+c==b){
//         cout << "YES" << endl;
//     }
//     else{
//         cout << "NO" << endl;
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
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long x;
    cin >> x;
    deque<long long> d;
    while (x)
    {
        long long y = x % 10;
        if (y > 4)
        {
            y = 9 - y;
        }
        d.push_front(y);
        x /= 10;
    }
    while (d.front() == 0)
    {
        d.pop_front();
    }
    if (d.size() == 0)
    {
        cout << 0 << endl;
        return;
    }
    for (auto i : d)
    {
        cout << i;
    }
    cout << endl;
}
int main()
{
    solve();
    return 0;
}