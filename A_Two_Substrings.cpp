#include<bits/stdc++.h>
using namespace std;
bool abFirst(string s){
    bool flag1 = false;
    bool flag2 = false;
    int n = s.size();
    for (int i = 0; i < n-1;i++){
        if(s[i]=='A' && s[i+1]=='B'){
            s[i] = '#';
            s[i + 1] = '#';
            flag1 = true;
            break;
        }
    }
    for (int i = 0; i < n-1;i++){
        if(s[i]=='B' && s[i+1]=='A'){
            s[i] = '#';
            s[i + 1] = '#';
            flag2 = true;
            break;
        }
    }
    // cout << "abfirst = " << s << endl;
    return flag1 && flag2;
}
bool baFirst(string s){
    bool flag1 = false;
    bool flag2 = false;
    int n = s.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'B' && s[i + 1] == 'A')
        {
            s[i] = '#';
            s[i + 1] = '#';
            flag1 = true;
            break;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'B')
        {
            s[i] = '#';
            s[i + 1] = '#';
            flag2 = true;
            break;
        }
    }
    // cout << "bafirst = " << s << endl;
    return flag1 && flag2;
}
void solve(){
    string s;
    cin >> s;
    if(abFirst(s) || baFirst(s)){
        cout << "YES" << endl;
        return;
    }
    // cout << s << endl;
    cout << "NO" << endl;
    return;
}
int main(){
    solve();
    return 0;
}