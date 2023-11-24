#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int Hc,Dc,Hm,Dm,k,w,a;
        cin>>Hc>>Dc>>Hm>>Dm>>k>>w>>a;
        bool characterTurn=true;
        int characterAttackCount=0;
        int demonAttackCount=0;
        while(Hc>0 && Dc>0){
            if(characterTurn){
                Hm-=Dc;
                characterTurn=false;
                characterAttackCount++;
                continue;
            }
            else{
                Hc-=Dm;
                demonAttackCount=0;
            }
        }
        if(Hc>0 && Hm<=0){
            cout<<"YES"<<endl;
            continue;
        }


    }
return 0;
}