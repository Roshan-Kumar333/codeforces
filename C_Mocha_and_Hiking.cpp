#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long *  a = new long long [n];
        for(long long i =0;i<n;i++){
            cin>>a[i];
        }
        if(a[0]>0){
            cout<<n+1<<" ";
            for(long long i=0;i<n-1;i++){
                cout<<i+1<<" ";
            }
            cout<<n;
        }
        else if(a[n-1]==0){
            for(long long i=0;i<n;i++){
                cout<<i+1<<" ";
            }
            cout<<n+1;
        }
        else{
            bool x = false;
            for(long long i=0;i<n-1;i++){
                if((!x)&&a[i]==0 && a[i+1]>0){
                    cout<<i+1<<" "<<n+1<<" ";
                    x = true;
                }
                else{
                    cout<<i+1<<" ";
                }
            }
            cout<<n;
        }
        cout<<endl;
    }
return 0;
}