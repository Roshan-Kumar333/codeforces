#include<bits/stdc++.h>
using namespace std;
long long required(vector<long long>&a ,long long k,long long d){
    long long sum = 0;
    for(auto i:a){
        
    }
}
void solve(){
    long long n, m, d;
    cin >> n >> m >> d;
    bool flag = false;
    long long x = n * m;
    vector<long long> a(x);
    for (long long i = 0; i < x;i++){
        cin >> a[i];
        if(abs(a[i]-a[0])%d!=0){
            flag = true;
        }
    }
    if(flag){
        cout << -1 << endl;
        return;
    }
    sort(a.begin(), a.end());
    long long ans = INT_MAX;
    long long start = 0;
    long long end = x - 1;
    while(start<=end){
        long long mid = start + ((end - start) / 2);

    }
}
int main(){
    solve();
    return 0;
}