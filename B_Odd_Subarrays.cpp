#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int* a = new int[n];
        for(int  i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                // cout<<a[i]<<" "<<a[i+1]<<endl;
                count++;
                i++;
            }
        }
        cout<<count<<endl;
    }
return 0;
}