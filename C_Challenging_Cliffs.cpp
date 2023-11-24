#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int* a = new int [n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int diff=INT_MAX;
        int start,end;
        for(int i=1;i<n;i++){
            if(abs(a[i-1]-a[i])<diff){
                diff=abs(a[i-1]-a[i]);
                start=i-1;
                end=i;
            }
        }
        cout<<a[start]<<" ";
        for(int i=end+1;i<n;i++){
            cout<<a[i]<<" ";
        }
        for(int j=0;j<start;j++){
            cout<<a[j]<<" ";
        }
        cout<<a[end]<<endl;
    }
return 0;
}