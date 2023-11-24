#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<pair<long long ,long long>> a(n);
    long long oddCount0 = 0;
    long long oddCount1 = 0;
    long long sameCount = 0;
    for (long long i = 0; i < n;i++){
        cin >> a[i].first;
        cin >> a[i].second;
        if(a[i].first%2!=0){
            oddCount0++;
        }
        if(a[i].second%2!=0){
            oddCount1++;
        }
        if(a[i].first%2!=0 && a[i].second%2!=0){
            sameCount++;
        }
    }
    long long x;
    long long y;
    x = oddCount0 % 2;
    y = oddCount1 % 2;
    if(x && !y){
        cout << -1 << endl;
        return;
    }
    if(!x&&y){
        cout << -1 << endl;
        return;
    }
    if(x&&y){
        if(sameCount==oddCount0 && sameCount==oddCount1){
            cout << -1 << endl;
            return;
        }
        else{
            cout << 1 << endl;
            return;
        }
    }
    cout << 0 << endl;
    return;
}
int main(){
    solve();
    return 0;
}