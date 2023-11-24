#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m;
    cin >> n >> m;
    long long *a = new long long[m];
    map<long long, long long>m1;
    set<long long> eff;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        m1[a[i]]++;
        eff.insert(a[i]);
    }
    long long x1 = n - eff.size();
    long long x2 = 0;
    long long counter = 1;
    long long ans = 0;
    while(m1.empty()==false){
        for(auto i:m1){
            i.second -= 1;
            if(i.second==0){
                m1.erase(i.first);
                // counter++;
            }
        }
        if(counter%2==0){
            long long c = x1;
            for(auto j:m1){
                if(c>=j.second){
                    x2++;
                    c -= j.second;
                    m1.erase(j.first);
                }
                else{
                    j.second -= c;
                    c = 0;
                }
            }
        }
        if(counter%2!=0){
            long long c = x2;
            for (auto j : m1)
            {
                if (c >= j.second)
                {
                    x2++;
                    c -= j.second;
                    m1.erase(j.first);
                }
                else
                {
                    j.second -= c;
                    c = 0;
                }
            }
        }
        // counter++;
        ans++;
    }
    cout << ans << endl;
}
int main(){
    long long t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}