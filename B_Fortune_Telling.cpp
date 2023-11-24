#include<bits/stdc++.h>
using namespace std;
bool res(int arr[],int n,int x,int i=0,int y){
    if(i==n-1){
        if(x+arr[i]==y || xDash^arr[i]==y){
            return true;
        }
        else{
            return false;
        }
    }
        x=x+arr[i];
        xDash=xDash^arr[i];
       bool a = res(arr,n,x,x,i+1,y);
       bool b = res(arr,n,xDash,xDash,i+1,y);
       if(a||b){
           return true;
       }
       else{
           return false;
       }
    }
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int* arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(res(arr,n,x,y)){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }
return 0;
}