#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long* a = new long long[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
       long long count=0;
       for(int i=1;i<=n;i++){
           for(int j=a[i]-i;j<=n;j=j+a[i]){
               if(j>0 && i<j){
                    if((a[i]*a[j]==( i+j))){
                        count++;
                    }
               }
           }
       }
       cout<<count<<endl;
    }
return 0;
}