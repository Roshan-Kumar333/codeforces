#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int* a= new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int start=0;
        int end=n-1;
        while(start<end){
            if(a[start]>=a[end]){
                break;
            }
            start++;
            end--;
        }
        if(start>=end){
            if(n%2!=0){
                if(a[n/2]!=a[n/2-1]){
                    
                }
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}