#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    char queue[n];
    for(int i=0;i<n;i++){
        cin>>queue[i];
    }
    while(t--){
        for(int j=0;j<n;j++){
            if(queue[j]=='B'&&queue[j+1]=='G'){
                swap(queue[j],queue[j+1]);
                j+=2;
            }
        }
    }
    for(int k=0;k<n;k++){
        cout<<queue[k];
    }
return 0;
}