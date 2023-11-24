#include<bits/stdc++.h>
using namespace std;
long long bs(long long* a,long long n,long long x){
    long long start = 0;
    long long end = n - 1;
    long long ans;
    while(start<=end){
        long long mid = (start + end) / 2;
        if(a[mid]==x){
            return mid + 1;
        }
        else if(a[mid]<x){
            start = mid + 1;
            // cout << "mid = " << mid << endl;
            // cout << "start = " << start << endl;
            // cout << "end = " << end << endl;
        }
        else if(a[mid]>x){
            // cout << "mid = " << mid << endl;
            // cout << "start = " << start << endl;
            // cout << "end = " << end << endl;
            ans = mid;
            end = mid-1;
        }
    }
    return ans+1;
}
void solve(){
    long long n;
    cin >> n;
    long long *a = new long long[n];
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        if(i>0){
            a[i] += a[i - 1];
        }
    }
    long long m;
    cin >> m;
    long long *b = new long long[m];
    for (long long i = 0;i<m;i++){
        cin >> b[i];
        cout << bs(a, n, b[i]) << endl;
    }
}
int main(){
    solve();
    return 0;
}