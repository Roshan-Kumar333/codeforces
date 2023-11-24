#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<pair<long long, long long>> a(n);
    for (long long i = 0;i<n;i++){
        cin >> a[i].first;
        cin >> a[i].second;
    }
    sort(a.begin(), a.end());
    long long prev = a[0].second;
    for (long long i = 1; i < n;i++){
        if(a[i].second<prev){
            prev = a[i].first;
        }
        else{
            prev = a[i].second;
        }
    }
    cout << prev << endl;
    return;
}
int main(){
    solve();
    return 0;
}