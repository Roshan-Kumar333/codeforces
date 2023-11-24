#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int* a = new int[n];
        double sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        long long ans;
        if(sum/n>1){
            ans=sum-n;
        }
        else if(sum/n<1){
            ans=1;
        }
        else{
            ans=0;
        }
        cout<<ans<<endl;
    }
return 0;
}