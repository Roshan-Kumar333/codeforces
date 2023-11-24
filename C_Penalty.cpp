#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a =0;
        int b =0;
        int specialA =0;
        int specialB =0;
        bool turnA=true;
        int remainingA=5;
        int remainingB=5;
        int ans=10;
        for(int i=0;i<10;i++){
            if(turnA){
                if(s[i]=='1'){
                    a++;
                }
                else if(s[i]=='?'){
                    specialA++;
                }
                turnA=false;
                remainingA--;
            }
            else{
                if(s[i]=='1'){
                     b++;
                }
                else if(s[i]=='?'){
                    specialB++;
                }
                turnA=true;
                remainingB--;
            }
            if(((remainingA+a)<(b+specialB))||((remainingB+b)<(a+specialA))){
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
return 0;
}