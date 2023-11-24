#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r,a;
        cin>>l>>r>>a;
        int res=INT_MIN ;
        int res = (((r-1)/a)+((r-1)%a));
        res = max (res,((r/a)))
        cout<<res<<endl;
    }
return 0;
}