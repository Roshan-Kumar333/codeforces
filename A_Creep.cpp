#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a,b;
    cin >> a >> b;
    long long creepiness = abs(a - b);
    string ans = "";
    bool flag = a > b ? true : false;
    if(creepiness==0){
        creepiness++;
    }
    while(a>0 && b>0){
        if(flag){
            long long x = creepiness;
            while(x>0 && a>0){
                ans += "0";
                x--;
                a--;
            }
            flag = !flag;
        }
        else{
            long long y = creepiness;
            while(y>0 && b>0){
                ans += "1";
                y--;
                b--;
            }
            flag = !flag;
        }
    }
    while(a>0){
        ans += "0";
        a--;
    }
    while(b>0){
        ans += "1";
        b--;
    }
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