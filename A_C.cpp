#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int count=0;
        bool aTurn;
        bool bTurn;
        if(a>b){
            aTurn=true;
            bTurn=false;
        }
        else{
            aTurn=false;
            bTurn=true;
        }
        while(a<=n && b <=n){
            if(aTurn){
                b+=a;
                aTurn=false;
                bTurn=true;
                count++;
            }
            else if(bTurn){
                a+=b;
                aTurn=true;
                bTurn=false;
                count++;
            }
        }
        cout<<count<<endl;
    }
return 0;
}