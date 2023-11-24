#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<long long>&a,long long n,long long k,long long target){
    long long sum = 0;
    for (long long i = n / 2; i < n;i++){
        if(a[i]<=target){
            sum += (target - a[i]);
        }
    }
    return sum <= k;
}
void solve(){
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long low = a[n / 2];
    long long high = INT_MAX;
    long long ans = INT_MIN;
    while(low<high){
        long long mid = low + ((high - low) / 2);
        if(isPossible(a,n,k,mid)){
            low = mid + 1;
            ans = max(ans, mid);
        }
        else{
            high = mid;
        }
    }
    cout << ans << endl;
}
int main(){
    solve();
    return 0;
}