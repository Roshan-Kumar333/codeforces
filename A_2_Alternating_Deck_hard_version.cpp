// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// void solve(){
//     ll n;
//     cin >> n;
//     vector<ll> a(n);
//     for (ll i = 0; i < n;i++){
//         cin >> a[i];
//     }
    
// }
// int main(){
//     ll t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
bool isPossible(int sum, int a,int n){
    int x = (sum - a) / (n - 1);
    if(x==a){
        return true;
    }
    int y = ((n - 2) * x + a) / n - 1;
    if(x==y){
        return true;
    }
    return false;
}
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n;i++){
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < n;i++){
        int x = (sum - a[i]) / (n - 1);
        if(isPossible(sum,a[i],n)){
            cout << "YES" << endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;
}
int main(){
    solve();
    return 0;
}