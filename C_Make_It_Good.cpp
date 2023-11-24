#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long *a = new long long[n];
    long long *b = new long long[n];
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    long long ans = 0;
    long long start = 0;
    long long end = n - 1;
    long long index = 0;
    map<long long, long long> m;
    while(start<end){
        if(m.find(b[index])!=m.end()){
            m[b[index]]--;
            if(m[b[index]==0]){
                m.erase(b[index]);
            }
            index++;
        }
        if(a[end]==b[index]){
            end--;
            index++;
        }
        else if(a[start]==b[index]){
            start++;
            index++;
        }
        else{
            m[a[start]]++;
            start++;
            ans = start;
        }
    }
    cout << ans<< endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}