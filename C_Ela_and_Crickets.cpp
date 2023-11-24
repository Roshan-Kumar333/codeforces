#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long r1, c1, r2, c2, r3, c3;
    cin >> r1 >> c1 >> r2 >> c2 >> r3 >> c3;
    long long x, y;
    cin >> x >> y;
    unordered_map<int, int> col;
    unordered_map<int, int> row;
    col[c1]++;
    col[c2]++;
    col[c3]++;
    row[r1]++;
    row[r2]++;
    row[r3]++;
    long long mrow, mcol;
    for(auto i:col){
        if(i.second>1){
            mcol = i.first;
        }
    }
    for(auto i:row){
        if(i.second>1){
            mrow = i.first;
        }
    }
    if((mrow==1 && mcol==1)){
        if(x==1 || y==1){
            cout << "YES" << endl;
            return;
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
    if(mcol==n && mrow==1){
        if(x==1 || y==n){
            cout << "YES" << endl;
            return;
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
    if(mcol==1 && mrow==n){
        if(x==n || y==1){
            cout << "YES" << endl;
            return;
        }
        cout << "NO" << endl;
        return;
    }
    if(mcol==n && mrow==n){
        if(x==n || y==n){
            cout << "YES" << endl;
            return;
        }
        cout << "NO" << endl;
        return;
    }
    if((x%2==0 && mrow%2==0) || (x%2!=0 && mrow%2!=0)){
        cout << "YES" << endl;
        return;
    }
    if((y%2==0 && mcol%2==0) || (y%2!=0 && mcol%2!=0)){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
    return;
}
int main(){
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
        /* code */
    }
    
    return 0;
}