#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    for (int i = 2; i < s.size();i++){
        int x = (int)(s[i - 1] - 'A');
        int y = (int)(s[i - 2] - 'A');
        x += y;
        x = x % 26;
        // cout << "x = " << x << " y = " << y << endl;
        y = (int)(s[i] - 'A');
        if(x!=y){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}
int main(){
    solve();
    return 0;
}