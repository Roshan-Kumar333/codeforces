#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2!=0){
            n+=1;
        }
        if (n<6){
            n=6;
        }
        long long res=n*2.5;
        cout<<res<<endl;
    }
return 0;
}