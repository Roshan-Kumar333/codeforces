#include<bits/stdc++.h>
using namespace std;
long long digits(long long n){
    long long ans = 0;
    while(n){
        n /= 10;
        ans++;
    }
    return ans;
}
void solve(){
    long long a, b, n;
    cin >> a >> b >> n;
    while(a<b){
        a *= 10;
        n--;
    }
}
int main(){
    solve();
    return 0;
}