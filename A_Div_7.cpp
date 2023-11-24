#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%7==0){
            cout<<n<<endl;
            continue;
        }
       int lastDigit=n%10;
       int lastMultipleOfSeven=n%7;
       if(lastDigit-lastMultipleOfSeven<0){
           n=n+7;
       }
       int res=n%7;
       cout<<n-res<<endl;
    }
return 0;
}