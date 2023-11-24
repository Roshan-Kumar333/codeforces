#include<bits/stdc++.h>
using namespace std;
bool isSorted(long long a[],long long n){
    for (long long i = 0; i < n-1;i++){
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}
bool isEqual(long long a[],long long b[],long long n){
    for (long long i = 0;i<n;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}
void solve(){
    long long n;
    cin >> n;
    n *= 2;
    long long *a = new long long[n];
    long long *b = new long long[n];
    long long *c = new long long[n];
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        b[i] = a[i];
        c[i] = a[i];
    }
    long long ans1 = 0;
    long long ans2 = 0;
    long long x;
    x = max(n, (long long)4);
    bool flag = true;
    for (long long i = 0; i < x;i++){
        if(isSorted(b,n)){
            break;
        }
        if(!flag){
            for (long long j = 0; j < n;j+=2){
                swap(b[j], b[j + 1]);
            }
            // printArray(b, n);
            flag = !flag;
        }
        else{
            for (long long  j= 0; j< n / 2;j++){
                swap(b[j], b[j + (n/2)]);
            }
            // printArray(b, n);
            flag = !flag;
        }
        if(isEqual(a,b,n)){
            cout << -1 << endl;
            return;
        }
        ans1++;
    }
    flag = true;
    for (long long i = 0; i < x; i++)
    {
        if (isSorted(c, n))
        {
            break;
        }
        if (flag)
        {
            for (long long j = 0; j < n; j += 2)
            {
                swap(c[j], c[j + 1]);
            }
            // printArray(b, n);
            flag = !flag;
        }
        else
        {
            for (long long j = 0; j < n / 2; j++)
            {
                swap(c[j], c[j + (n / 2)]);
            }
            // printArray(b, n);
            flag = !flag;
        }
        if (isEqual(a, c, n))
        {
            cout << -1 << endl;
            return;
        }
        ans2++;
    }
    cout << min(ans1, ans2) << endl;
}
int main(){
    solve();
    return 0;
}