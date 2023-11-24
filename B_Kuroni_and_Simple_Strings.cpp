#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    vector<long long> ans;
    long long x = 0;
    long long start = 0;
    long long end = s.size() - 1;
    while(start<end){
        if(s[start]=='(' && s[end]==')'){
            x += 2;
            ans.push_back(start + 1);
            ans.push_back(end + 1);
            start++;
            end--;
            continue;
        }
        if(s[start]==')'){
            start++;
        }
        if(s[end]=='('){
            end--;
        }
    }
    if(x>0){
        cout << 1 << endl;
    }
    cout << x << endl;
    sort(ans.begin(), ans.end());
    for(auto i:ans){
        cout << i << " ";
    }
    cout << endl;
    return;
}
int main(){
    solve();
    return 0;
}