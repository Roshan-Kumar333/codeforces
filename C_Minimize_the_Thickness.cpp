#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    long long index = 0;
    long long sum = a[index];
    long long res = n;
    while(index<n){
        long long currSum = 0;
        long long currSize = 0;
        long long maxi = 0;
        for (long long i = 0; i < n;i++){
            currSum += a[i];
            currSize += 1;
            maxi = max(maxi, currSize);
            if(currSum==sum){
                // cout << "currSum = " << currSum << endl;
                currSum = 0;
                currSize = 0;
            }
            if(currSum>sum){
                break;
            }
        }
        if(currSum==0){
            res = min(maxi, res);
        }
        index++;
        sum += a[index];
    }
    cout << res << endl;
    return;
}
int main(){
    long long t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}