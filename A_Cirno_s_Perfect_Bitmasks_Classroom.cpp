// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         long long x;
//         cin >> x;
//         long long res = x & ~(x - 1);
//         if(x>res){
//             cout << res << endl;
//         }
//         if(x==res){
//             if(x==1){
//                 cout << 3 << endl;
//             }
//             else{
//                 cout << res + 1 << endl;
//             }
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a;
        long long element;
        bool flag = false;
        long long evenCount = 0;
        long long sum = 0;
        long long ans = 0;
        long long x = 0;
        long long x1 = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> element;
            a.push_back(element);
            // cout << a[i] << " ";
            if (a[i] % 2 != 0)
            {
                flag = true;
            }
            else
            {
                evenCount++;
            }
            sum += a[i];
            if (a[i] % 2 == 0 && (a[i] / 2) % 2 != 0)
            {
                x++;
                x1 += a[i];
            }
        }
        if (flag)
        {
            cout << evenCount << endl;
        }
        else
        {
            if(x%2==0){
                evenCount -= x;
                sum -= x1;
            }
            while (sum % 2 == 0)
            {
                sum /= 2;
                ans++;
            }
            ans += evenCount - 1;
            cout << ans << endl;
        }
    }
    return 0;
}