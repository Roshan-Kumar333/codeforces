#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (long long i = 0; i < n;i++){
        cin >> s[i];
    }
    long long count1 = 0;
    bool flag = false;
    bool flag1 = false;
    for (long long i = 0; i < n;i++){
        for (long long j = 0; j < m;j++){
            if(s[i][j]=='0'){
                flag1 = true;
                if((j+1)<m && s[i][j+1]=='0'){
                    flag = true;
                }
                else if((j-1)>=0 && s[i][j-1]=='0'){
                    flag = true;
                }
                else if((i+1)<n && s[i+1][j]=='0'){
                    flag = true;
                }
                else if((i-1)>=0 && s[i-1][j]=='0'){
                    // count++;
                    flag = true;
                }
                if(i+1<n){
                    if (j + 1 < m && s[i+1][j+1]=='0'){
                        flag = true;
                    }
                    if(j-1>=0 && s[i+1][j-1]=='0'){
                        flag = true;
                    }
                }
                if((i-1>=0)){
                    if(j+1<m && s[i-1][j+1]=='0'){
                        flag = true;
                    }
                    if(j-1>=0 && s[i-1][j-1]=='0'){
                        flag = true;
                    }
                }
            }
            else{
                count1++;
            }
        }
    }
    if(flag){
        cout << count1 << endl;
        return;
    }
    else if(flag1){
        cout << count1 - 1 << endl;
        return;
    }
    else{
        cout << count1 - 2 << endl;
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