#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool a,b,c;
        a=false;
        b=false;
        c=false;
        if((n-1)==0 || (n-1)%3==0){
            a=true;
        }
        else if((n-2)==0 || (n-2)%3==0){
            b=true;
        }
        else if((n-3)==0 || (n-3)%3==0){
            c=true;
        }
        bool oneTurn;
        bool twoTurn;
        if(a){
            oneTurn =true;
            twoTurn=false;
        }
        else{
            oneTurn=false;
            twoTurn=true;
        }
        while(n>0){
            if(oneTurn){
                cout<<1;
                oneTurn=false;
                twoTurn=true;
                n-=1;
            }
            else if(twoTurn){
                cout<<2;
                twoTurn=false;
                oneTurn=true;
                n-=2;
            }
        }
        cout<<endl;
    }
return 0;
}