#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    char c;
    cin >> c;
    char *str = new char[n + 1];
    for (int i = 1; i < n + 1;i++){
        cin >> str[i];
    }
    bool flag = true;
    for (int i = 1; i < n+1;i++){
        if(str[i]!=c){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << 0 << endl;
        return;
    }
    long long ans=-1;
    for (int i = 1; i < n + 1;i++){
        bool flag1 = true;
        for (int j = i; j < n + 1;j+=i){
            if(str[j]!=c){
                flag1 = false;
                break;
            }
        }
        if(flag1){
            ans = i;
            break;
        }
    }
    if(ans==1){
        cout << 0 << endl;
        return;
    }
    else if(ans==-1){
        cout << 2 << endl;
        cout << n << " " << n - 1 << endl;
        return;
    }
    else{
        cout << 1 << endl;
        cout << ans << endl;
        return;
    }
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}