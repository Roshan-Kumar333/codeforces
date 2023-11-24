#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    long long x3, x4, y3, y4;
    if(x1==x2){
        long long c = abs(y2 - y1);
        x3 = x1 + c;
        x4 = x2 + c;
        y3 = y1;
        y4 = y2;
    }
    else if(y1==y2){
        long long c = abs(x2 - x1);
        x3 = x1;
        x4 = x2;
        y3 = y1 + c;
        y4 = y2 + c;
    }
    else{
        if(abs(x2-x1)==abs(y2-y1)){
            x3 = x2;
            x4 = x1;
            y3 = y1;
            y4 = y2;
        }
        else{
            cout << -1 << endl;
            return;
        }
    }
    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    return;
}
int main(){
    solve();
    return 0;
}