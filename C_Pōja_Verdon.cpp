#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=0 && arr[i]<=3979){
            cout<<arr[i]<<endl;
            break;
        }
    }
return 0;
}