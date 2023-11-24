#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        float* a= new float[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        bool flag=false;
        for(int i=0;i<n;i++){
            float x =((sum-a[i])/(n-1));
            if(x==a[i]){
                // cout<<((sum-a[i])/(n-1))<<endl;
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}