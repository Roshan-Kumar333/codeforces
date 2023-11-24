#include<bits/stdc++.h>
using namespace std;
void primeFactors(long long n,long long m,long long i,vector<set<long long>>&ma){
    if(n%2==0){
        ma[i].insert(2);
        while(n%2==0){
            n /= 2;
        }
    }
    if(n%3==0){
        ma[i].insert(3);
        while(n%3==0){
            n /= 2;
        }
    }
    for (long long k = 5; k * k <= n;k+=6){
        if(n%k==0){
            ma[i].insert(k);
            while(n%k==0){
                n /= k;
            }
        }
        if(n%(k+2)){
            ma[i].insert(k + 2);
            while(n%(k+2)==0){
                n /= (k + 2);
            }
        }
    }
}
void solve(){
    long long n, m;
    cin >> n >> m;
    vector<pair<long long,long long>> a(n);
    vector<set<long long>> able(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i].first;
        a[i].second = i;
        primeFactors(a[i].first, m, i, able);
    }
    sort(a.begin(), a.end());
    
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}