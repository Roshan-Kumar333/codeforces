#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==0){
            cout<<1<<endl;
            continue;
        }
        int res= a +(b*2) +1;
        cout<<res<<endl;
    }
return 0;
}