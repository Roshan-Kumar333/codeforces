#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        bool flag = true;
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if((i>0) && (j>0)){
                    if((arr[i-1][j]==1) && (arr[i][j-1]==1)){
                            flag=false;
                    }
               }
               if(i>0){
                    if((arr[i-1][j]==1) && (arr[i][j+1]==1)){
                        flag =false;
                    }
               }
               if(j>0){
                    if((arr[i][j-1]==1) && (arr[i+1][j]==1)){
                        flag =false;
                    }
               }
               else if((arr[i+1][j]==1) && (arr[i][j+1]==1)){
                   flag =false;
               }
           }
       }
       if(flag==true){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
    }
return 0;
}