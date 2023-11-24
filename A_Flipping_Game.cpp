#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long count0 = 0;
    long long count1 = 0;
    long long curr = 0;
    long long res = 0;
    vector<long long> a(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        if(a[i]==0){
            count0++;
            curr++;
        }
        else{
            count1++;
            res = max(curr, res);
            curr = 0;
        }
    }
    res = max(curr, res);
    long long x = count1 + res;
    if(count0>=x){
        cout << count0 << endl;
        return;
    }
    else{
        cout << x << endl;
        return;
    }
}
int main(){
    solve();
    return 0;
}