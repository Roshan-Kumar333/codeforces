#include<bits/stdc++.h>
using namespace std;
bool isPossible(long long c,long long m,long long x,long long mid){
    long long a = c - mid;
    long long b = m -mid;
    if((a+b+x)>=mid){
        return true;
    }
    return false;
}
void solve(){
    long long c, m, x;
    cin >> c >> m >> x;
    long long y = min(c, m);
    if(x>=y){
        cout << y << endl;
        return;
    }
    long long low = x;
    long long high = y;
    long long ans = INT_MIN;
    while(low<=high){
        long long mid = (low + high) / 2;
        if(isPossible(c,m,x,mid)){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << ans << endl;
    return;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}