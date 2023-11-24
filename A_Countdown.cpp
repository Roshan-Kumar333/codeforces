#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long sum = 0;
    long long count = 0;
    for (long long i = 0; i < n;i++){
        long long element = (long long)s[i];
        element -= 48;
        sum += element;
        if(element!=0 && i<n-1){
            count++;
        }
    }
    cout << sum + count << endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}