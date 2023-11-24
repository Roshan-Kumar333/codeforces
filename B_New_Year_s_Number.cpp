#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a = n/2020;
        int b = n%2020;
        if(a==0){
            cout<<"NO"<<endl;
        }
        else if(b==0){
            cout<<"YES"<<endl;
        }
        else if(a>=b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}