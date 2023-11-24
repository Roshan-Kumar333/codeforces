#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool flag =false;
        int y =1;
        double x;
        if(n>19){
            cout<<"NO"<<endl;
            flag = true;
        }
        else{
            x=pow(3,n);
        }
        if((!flag)&&(x>INT_MAX)){
            cout<<"NO"<<endl;
        }
        else if((!flag)){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<y<<" ";
                y*=3;
            }
        }
        cout<<endl;
    }
return 0;
}