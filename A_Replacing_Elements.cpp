#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, d;
    cin >> n >> d;
    long long element;
    vector<long long> a;
    long long mini = INT_MAX;
    long long sMini = INT_MAX;
    bool flag = true;
    for (long long i = 0; i < n;i++){
        cin >> element;
        if(element>d){
            flag = false;
        }
        a.push_back(element);
        if(a[i]<mini){
            sMini = mini;
            mini = a[i];
        }
        else if(a[i]<sMini){
            sMini = a[i];
        }
    }
    if(flag){
        cout << "YES" << endl;
        return;
    }
    else if(sMini+mini<=d){
        cout << "YES" << endl;
        return;
    }
    else{
        cout << "NO" << endl;
        return;
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