#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long evenCount = 0;
    long long oddCount = 0;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        if(a[i]%2==0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
    long long moves = n / 2;
    if(n%2!=0){
        moves++;
    }
    long long evenScore = 0;
    long long oddScore = 0;
    while(evenCount>0 || oddCount>0){
        if(evenCount>0){
            evenScore++;
            evenCount -= 2;
            continue;
        }
        oddScore++;
        oddCount -= 2;
    }
    if(oddScore%2!=0){
        oddScore--;
    }
    if((evenScore+oddScore)>=moves){
        cout << "Alice" << endl;
        return;
    }
    cout << "Bob" << endl;
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