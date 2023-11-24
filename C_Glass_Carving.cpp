#include<bits/stdc++.h>
using namespace std;
long long widest(vector<long long>a){
    
}
void solve(){
    long long w, h, n;
    cin >> w >> h >> n;
    vector<long long> vr;
    vector<long long> hr;
    while(n--){
        char c;
        long long cut;
        cin >> c >> cut;
        if(c=='H'){
            hr.push_back(cut);
        }
        else{
            vr.push_back(cut);
        }
    }
}
int main(){
    solve();
    return 0;
}