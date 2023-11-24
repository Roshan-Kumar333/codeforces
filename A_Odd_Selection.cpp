#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, x;
    cin >> n >> x;
    long long *a = new long long[n];
    long long oddCount = 0;
    long long evenCount = 0;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        if(a[i]%2==0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
    if(x==1 && a[0]%2==0 && n==1){
        cout << "NO" << endl;
        return;
    }
    if(oddCount==0){
        cout << "NO" << endl;
        return;
    }
    if(oddCount%2==0 && oddCount>0){
        oddCount--;
    }
    if(x%2==0){
        if(x<oddCount){
            if(evenCount>=1){
                cout << "YES" << endl;
                return;
            }
            else{
                cout << "NO" << endl;
                return;
            }
        }
        else{
            x -= oddCount;
            if(evenCount>=x){
                cout << "YES" << endl;
                return;
            }
            else{
                cout << "NO" << endl;
                return;
            }
        }
    }
    else{
        if(x<=oddCount){
            cout << "YES" << endl;
            return;
        }
        else{
            x -= oddCount;
            if(evenCount>=x){
                cout << "YES" << endl;
                return;
            }
            else{
                cout << "NO" << endl;
                return;
            }
        }
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