#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long a = 0, b = 0;
    set<long long> s1;
    for (long long i = 0; i < n;i++){
        if(s[i]=='>'){
            a++;
        }
        else if(s[i]=='<'){
            b++;
        }
        else{
            s1.insert(i);
            s1.insert(((i + 1) % n));
        }
    }
    if(a==0 || b==0){
        cout << n << endl;
        return;
    }
    else{
        cout << s1.size() << endl;
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