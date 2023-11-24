#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    vector<pair<long long,long long>> maxL(n);
    long long maxi = a[0];
    for (long long i = 0; i < n;i++){
        maxi = max(maxi, a[i]);
        maxL[i].first=maxi-a[i];
        maxL[i].second = i;
    }
    sort(maxL.begin(), maxL.end());
    vector<int> ans(n+1,-1);
    int index = 1;
    for (long long i = 0; i < n;i++){
        while(maxL[i].first>0){
            ans[index] = maxL[i].second + 1;
            maxL[i].first -= index;
            index++;
        }
    }
    // for(auto i:maxL){
    //     cout << i.first << " x " << i.second << endl;
    // }
    // cout <<"here"<< endl;
    if(ans[1]==-1){
        ans[1] = 1;
    }
    for (long long i = 2; i <= n;i++){
        if(ans[i]==-1){
            ans[i] = ans[i - 1];
        }
    }
    for (int i = 1;i<=n;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}