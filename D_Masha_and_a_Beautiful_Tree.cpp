#include<bits/stdc++.h>
using namespace std;
void mySwap(vector<long long>&a,long long l,long long r,long long index){
    index /= 2;
    while((l+index)<=r){
        swap(a[l], a[l + index]);
        l++;
    }
}
void solve(){
    long long n;
    cin >> n;
    vector<long long>a(n);
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    int index = 2;
    int operations = 0;
    while(index<=n){
        for (long long i = 0; i < n;i+=index){
            if(a[i]>a[i+index-1]){
                // cout << "here " << a[i] << " " << a[i + index - 1] << endl;
                // cout << "index = " << index << endl;
                operations++;
                mySwap(a, i, i + index - 1, index);
            }
        }
        index *= 2;
    }
    for (int i = 1; i < n;i++){
        if(a[i]<a[i-1]){
            cout << -1 << endl;
            return;
        }
    }

    cout << operations << endl;
    return;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}