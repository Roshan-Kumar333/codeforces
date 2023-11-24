#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    string s;
    cin >> s;
    string one = "";
    string two = "";
    bool flag = true;
    for (long long i = 0; i < n;i++){
        if(s[i]=='0'){
            one += '0';
            two += '0';
        }   
        else if(s[i]=='2'){
            if(flag){
                one += '1';
                two += '1';
            }
            else{
                one += '0';
                two += '2';
            }
        }
        else{
            if(flag){
                one += '1';
                two += '0';
                flag = false;
            }
            else{
                one += '0';
                two += '1';
            }
        }
    }
    cout << one << endl;
    cout << two << endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}