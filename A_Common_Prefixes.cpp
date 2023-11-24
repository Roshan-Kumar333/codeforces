#include<bits/stdc++.h>
using namespace std;
void flip(string &s,long long index){
    for (long long i = index; i < s.size();i++){
        if(s[i]=='a'){
            s[i] = 'b';
        }
        else{
            s[i] = 'a';
        }
    }
}
void solve(){
    long long n;
    cin >> n;
    long long *a = new long long[n];
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    string s(100, 'a');
    cout << s << endl;
    for (long long i = 1; i < n;i++){
        flip(s, a[i - 1]);
        cout << s << endl;
    }
    flip(s, a[n - 1]);
    cout << s << endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}