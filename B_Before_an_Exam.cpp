#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long d, studyTime;
    cin >> d >> studyTime;
    long long *a = new long long[d];
    long long *b = new long long[d];
    long long mini = 0;
    long long maxi = 0;
    for (long long i = 0; i < d;i++){
        cin >> a[i];
        cin >> b[i];
        mini += a[i];
        maxi += b[i];
    }
    if(studyTime<mini || studyTime>maxi){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    studyTime -= mini;
    for (long long i = 0; i < d;i++){
        long long x = b[i] - a[i];
        long long y = min(x, studyTime);
        a[i] += y;
        studyTime -= y;
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}
int main(){
    solve();
    return 0;
}