#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *a =new int[n];
        int *b = new int [n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                swap(a[i],b[i]);
            }
        }
        int maxa=a[0];
        int maxb = b[0];
        for(int i=0;i<n;i++){
            maxa=max(a[i],maxa);
            maxb=max(b[i],maxb); 
       }
       cout<<maxa*maxb<<endl;
    }
return 0;
}