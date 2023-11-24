#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<pair<long long, long long>> a;
    for (long long i = 0; i < n;i++){
        pair<long long, long long> x;
        cin >> x.first;
        cin >> x.second;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    string ans = "";
    for (auto i = 1; i < a.size();i++){
        if(a[i-1].second>a[i].second){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    for (auto i = 0; i < a.size(); i++)
    {
        if (i == 0)
        {
            long long x = a[i].first;
            long long y = a[i].second;
            while (x--)
            {
                ans += "R";
            }
            while (y--)
            {
                ans += "U";
            }
            continue;
        }
        long long x = a[i].first - a[i - 1].first;
        long long y = a[i].second - a[i - 1].second;
        while(x--){
            ans += "R";
        }
        while(y--){
            ans += "U";
        }
    }
    cout << ans << endl;
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