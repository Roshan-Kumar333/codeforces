#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    char temp=arr[0];
    int count=0;
    for(int j=1;j<n;j++){
        if(arr[j]==temp){
            count++;
        }
        else{
            temp=arr[j];
        }
    }
    cout<<count;
return 0;
}