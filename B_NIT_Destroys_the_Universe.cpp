#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long *a = new long long[n];
    set<long long> s;
    deque<long long> d;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        s.insert(a[i]);
        d.push_back(a[i]);
    }
    if (s.size() == 1 && a[0] == 0)
    {
        cout << 0 << endl;
        return;
    }
    if(s.size()==1){
        cout << 1 << endl;
        return;
    }
    while(d.front()==0){
        d.pop_front();
    }
    while(d.back()==0){
        d.pop_back();
    }
    bool flag = true;
    for(auto i:d){
        if(i==0){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << 1 << endl;
        return;
    }
    else{
        cout << 2 << endl;
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