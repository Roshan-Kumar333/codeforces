#include<bits/stdc++.h>
using namespace std;
void fillSmall(vector<long long>&a,vector<long long>&b, vector<long long>&small,long long n){
    long long start = 0;
    for (long long i = 0;i<n;i++){
        while(b[start]<a[i]){
            start++;
        }
        small[i] = b[start] - a[i];
    }
}
long long border(vector<long long>&a,vector<long long>&b,long long n,set<long long>&s){
    long long end = n - 2;
    long long ans =n;
    for (long long i = n - 1; i > 0;i--){
        if(b[end]<a[i]){
            ans = min(ans, i);
            s.insert(i);
        }
        end--;
    }
    // cout << "ans = " << ans << endl;
    return ans;
}
void fillLarge(vector<long long>&a,vector<long long>&b,vector<long long>&large,long long n){
    set<long long> s;
    long long index = border(a, b, n,s);
    for (long long i = 0;i<n;i++){
        long long maxi = max(b[i], b[index-1]);
        if(i>=index &&(s.find(i))==s.end()){
            maxi = max(b[i], b[n - 1]);
        }
        large[i] = maxi - a[i];
    }
}
void printVector(vector<long long>&a){
    for(auto i:a){
        cout << i << " ";
    }
}
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    for (long long i = 0;i<n;i++){
        cin >> a[i];
    }
    for (long long i = 0; i < n;i++){
        cin >> b[i];
    }
    vector<long long> small(n);
    vector<long long> large(n);
    fillSmall(a,b,small,n);
    fillLarge(a,b,large,n);
    printVector(small);
    cout << endl;
    printVector(large);
    cout << endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}