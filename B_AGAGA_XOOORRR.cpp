#include<bits/stdc++.h>
using namespace std;
bool isTwo(vector<long long>a,long long tx){
    long long sf = 0;
    for (long long i = 0; i < a.size() - 1;i++){
        tx = tx ^ a[i];
        sf = sf ^ a[i];
        if(tx==sf){
            return true;
        }
    }
    return false;
}
bool isThree(vector<long long>a,long long tx){
    long long first = 0;
    for (long long i = 0; i < a.size() - 2;i++){
        first = first ^ a[i];
        long long second = 0;
        long long third = tx^first;
        for (long long j = i + 1; j < a.size() - 1;j++){
            second = second ^ a[j];
            third = third ^ a[j];
            if(first==second && second==third){
                return true;
            }
        }
    }
    return false;
}
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long tx = 0;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        tx = tx ^ a[i];
    }
    if(isTwo(a,tx) || isThree(a,tx)){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
    return;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}