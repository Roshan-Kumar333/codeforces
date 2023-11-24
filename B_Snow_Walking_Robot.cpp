#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    long long uCount = 0,dCount=0,rCount=0,lCount=0;

    for (long long i = 0; i < s.size();i++){
        if(s[i]=='U'){
            uCount++;
        }
        else if(s[i]=='D'){
            dCount++;
        }
        else if(s[i]=='R'){
            rCount++;
        }
        else{
            lCount++;
        }
    }
    long long x = min(uCount, dCount);
    long long y = min(rCount, lCount);
    long long t = (2 * x) + (2 * y);
    if(x==0 && y>0){
        cout << 2 << endl;
        cout << "RL" << endl;
        return;
    }
    if(y==0 && x>0){
        cout << 2 << endl;
        cout << "UD" << endl;
        return;
    }
    string ans = "";
    long long x1 = x;
    long long y1 = y;
    while(x--){
        ans += "U";
    }
    while(y--){
        ans += "R";
    }
    while(x1--){
        ans += "D";
    }
    while(y1--){
        ans += "L";
    }
    cout << t << endl;
    cout << ans << endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}