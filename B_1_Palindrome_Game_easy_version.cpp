#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int zeroes=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                zeroes++;
            }
        }
        if(n%2==0){
            cout<<"BOB"<<endl;
        }
        else{
            if(s[n/2]=='0'){
                zeroes--;
                if(zeroes==0){
                    cout<<"BOB"<<endl;
                }
                else if(zeroes==1){
                    cout<<"DRAW"<<endl;
                }
                else{
                    cout<<"ALICE"<<endl;
                }
            }
            else{
                cout<<"BOB"<<endl;
            }
        }
    }
return 0;
}