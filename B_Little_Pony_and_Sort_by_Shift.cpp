#include<bits/stdc++.h>
using namespace std;
bool isSorted(long long a[],long long n){
    for (long long i = 1;i<n;i++){
        if(a[i]<a[i-1]){
            return false;
        }
    }
    return true;
}
void solve(){
    long long n;
    cin >> n;
    long long *a = new long long[n];
    long long bre = 0;
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        if(i>0 && a[i]<a[i-1] && bre==0){
            bre = i;
        }
    }
    if(bre==0){
        cout << bre << endl;
        return;
    }
    long long *b = new long long[n];
    long long index = 0;
    while(bre+index<n){
        b[index] = a[bre+index];
        index++;
    }
    long long x = 0;
    while(x<bre){
        b[index] = a[x];
        x++;
        index++;
    }

    if(isSorted(b,n)){
        cout << n - bre << endl;
        return;
    }
    else{
        cout << -1 << endl;
        return;
    }
}
int main(){
    solve();
    return 0;
}