#include<bits/stdc++.h>
using namespace std;
void solve(long long t){
    long long n;
    cin >> n;
    vector<long long> x(n);
    vector<long long> y(n);
    for (long long i = 0; i < n;i++){
        cin >> x[i];
    }
    for (long long i = 0; i < n;i++){
        cin >> y[i];
        y[i] -= x[i];
    }
    sort(y.begin(), y.end());
    long long ans = 0;
    long long start = -1;
    for (long long i = 0; i < n;i++){
        if(y[i]<0){
            start = i;
        }
    }
    if(start==n-1){
        cout << 0 << endl;
        return;
    }
    if(start==-1){
        cout << n / 2 << endl;
        return;
    }
    long long x1 = start;
    long long end = start+1;
    long long count = 0;
    while(start>=0 && end<n){
        if(y[start]+y[end]>=0){
            ans++;
            start--;
            end++;
        }
        else{
            end++;
            count++;
        }
    }
    if(start==-1){
        count += n - end;
    }
    ans += (count / 2);
    cout << ans << endl;
}
int main(){
    long long t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve(t);
    }
    
    return 0;
}