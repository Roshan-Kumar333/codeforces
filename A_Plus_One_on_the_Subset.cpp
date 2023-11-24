#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int x=arr[0];
        int y=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>x){
                x=arr[i];
            }
            if(arr[i]<y){
                y=arr[i];
            }
        }
        cout<<x-y<<endl;
    }
return 0;
}