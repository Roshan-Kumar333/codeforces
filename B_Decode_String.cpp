#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    string t;
    cin >> t;
    string ans="";
    vector<char>temp(27);
    for (long long i = 1; i < 27;i++){
        temp[i] = (char)(96 + i);
    }
    for (long long i = 0; i < n; i++)
    {
        if (i < n - 2 && t[i + 2] == '0')
        {
            if(i<n-3 && t[i+3]=='0'){
                ans += temp[t[i] - 48];
                continue;
            }
            long long a = (int)(t[i] - 48);
            long long b = (int)(t[i + 1] - 48);
            long long x = a * 10 + b;
            char c = temp[x];
            ans += c;
            i += 2;
        }
        else
        {
            ans += temp[t[i] - 48];
        }
    }
    cout << ans << endl;
    return;
}
int main(){
    long long t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}