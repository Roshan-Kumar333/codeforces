#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    string s;
    cin >> s;
    deque<char> s1;
    s1.push_back(s[n - 1]);
    for (long long i = n-2;i>=0;i--){
        if(s1.front()=='0' && s[i]=='1' && s[i-1]=='1'){
            continue;
        }
        if(s1.front()=='0' && s[i]=='1'){
            while(s1.front()=='0' && s1.empty()==false){
                s1.pop_front();
            }
            s1.push_front('0');
        }
        else{
            s1.push_front(s[i]);
        }
    }
    for (auto i:s1)
    {
        cout << i;
    }
    cout << endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}