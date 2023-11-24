#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m;
    cin >> n >> m;
    if(n==1 && m==1){
        cout << 0 << endl;
        return;
    }
    long long maxi = max(n, m);
    long long mini = min(n, m);
    cout << maxi + 2 * (mini - 1) << endl;
    return;
}
    int main()
    {
        long long t;
        cin >> t;
        while(t--){
            solve();
        }
        return 0;
}