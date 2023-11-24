#include<bits/stdc++.h>
using namespace std;
void isEven(vector<pair<long long,long long>>&ans,long long n){
    for (long long i = 0; i < n;i+=2){
        if((i+2)%4==0){
            ans.push_back({i + 1, i + 2});
        }
        else{
            ans.push_back({i + 2, i + 1});
        }
    }
}

void isOdd(vector<pair<long long,long long>>&ans,long long n){
    for (long long i = 0; i < n;i+=2){
        ans.push_back({i + 1, i + 2});
    }
}
void solve(){
    long long n, k;
    cin >> n >> k;
    set<long long> s;
    for (long long i = 1; i <= n;i++){
        s.insert(i);
    }
    if(k==0){
        cout << "NO" << endl;
        return;
    }
    vector<pair<long long, long long>> ans;
    if(k%2==0){
        if((2+k)%4!=0){
            cout << "NO" << endl;
            return;
        }
        isEven(ans, n);
    }
    else{
        isOdd(ans, n);
    }
    cout << "YES" << endl;
    for(auto i:ans){
        cout << i.first << " " << i.second << endl;
    }
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}