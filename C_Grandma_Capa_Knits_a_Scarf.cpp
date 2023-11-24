#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long res = INT_MAX;
    for (int i = 0; i < 26;i++){
        char c = char(97 + i);
        // cout << c << endl;
        long long start = 0;
        long long end = n-1;
        long long count = 0;
        while(start<=end){
            if(s[start]!=s[end]){
                if(s[start]==c){
                    start++;
                    count++;
                }
                else if(s[end]==c){
                    end--;
                    count++;
                }
                else{
                    break;
                }
            }
            else{
                start++;
                end--;
            }
        }
        if(start>=end){
            res = min(res, count);  
        }
    }
    if(res==INT_MAX){
        cout << -1 << endl;
    }
    else{
        cout << res << endl;
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