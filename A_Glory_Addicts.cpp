#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    vector<long long> b(n);
    vector<long long> fire;
    vector<long long> frost;
    // cout << "hereee" << endl;
    for (long long i = 0; i < n;i++){
        cin >> b[i];
        // cout << " x = " << b[i] << endl;
        if(a[i]==1){
            frost.push_back(b[i]);
            // cout << frost[0] << " x " << endl;
        }
        else{
            fire.push_back(b[i]);
        }
    }
    if(fire.size()==0){
        long long ans = 0;
        for(auto i:frost){
            ans += i;
        }
        cout << ans << endl;
        return;
    }
    if(frost.size()==0){
        long long ans = 0;
        for(auto i:fire){
            ans += i;
        }
        cout << ans << endl;
        return;
    }
    sort(fire.begin(), fire.end());
    sort(frost.begin(), frost.end());
    long long j = frost.size() - 1;
    long long i = fire.size() - 1;
    long long ans = 0;
    while(j>=0 && i>=0){
        ans += (fire[i] * 2);
        ans += (frost[j] * 2);
        i--;
        j--;
    }
    if(i>=0){
        while(i>=0){
            ans += fire[i];
            i--;
        }
        cout << ans << endl;
        return;
    }
    if(j>=0){
        while(j>=0){
            ans += frost[j];
            j--;
        }
        cout << ans << endl;
        return;
    }
    cout << ans - min(fire[0], frost[0]) << endl;
    return;
}
int main(){
    long long t;
    cin>>t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}