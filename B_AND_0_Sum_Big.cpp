#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long ans = 1;
        for (int i = 0; i < k;i++){
            ans = (ans * n) % 1000000007;
        }
        cout << ans % 1000000007 << endl;
    }
    return 0;
}