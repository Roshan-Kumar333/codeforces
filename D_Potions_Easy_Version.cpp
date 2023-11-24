#include<bits/stdc++.h>
using namespace std;
long long sol(vector<long long>&a,vector<long long>&dp,int n,int index=0,int health=0,int taken=0){
    if(health<0){
        return taken-1;
    }
    if(index==n){
        return taken;
    }
    if(dp[index]!= -1){
        return dp[index];
    }
    long long c = sol(a, dp, n, index + 1, health + a[index], taken + 1);
    long long b = sol(a, dp, n, index + 1, health,taken);
    return dp[index] = max(b, c);
}
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> dp(n, -1);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    cout << sol(a, dp, n)<<endl;
    for(auto i:dp){
        cout << i << " ";
    }
}
int main(){
    solve();
    return 0;
}