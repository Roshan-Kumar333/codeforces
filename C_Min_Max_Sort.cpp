#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    map<long long, long long> m;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        m[a[i]] = i;
    }
    long long start = n / 2;
    long long end = start + 1;
    if(n%2!=0){
        end++;
    }
    long long operations = n / 2;
    long long count = 0;
    long long prev1 = -1;
    long long prev2 = -1;
    while(start>0 && end<=n){
        if(m[start]<m[end] && ((prev1==-1 && prev2==-1) || (m[start]<m[prev1] && m[end]>m[prev2]))){
            operations--;
        }
        else{
            break;
        }
        prev1 = start;
        prev2 = end;
        start--;
        end++;
    }
    cout << operations << endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}