#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, q;
    cin >> n >> q;
    long long *a = new long long[n];
    for (long long i = 0; i < n;i++){
        cin >> a[i];
        a[i]=q-a[i];
    }
    long long *miniOnRight = new long long[n];
    miniOnRight[n - 1] = -1;
    long long mini = INT_MAX;
    for (long long i = n-2; i < n;i++){

    }
}
int main(){
return 0;
}