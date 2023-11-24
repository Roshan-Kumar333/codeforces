#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        int count0=0;
        int count1=0;
        int *arr=new int[n];
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                count1++;
            }
            else{
                count0++;
            }
            if(count1==count0){
                arr[i]=-1;
            }
            else{
                arr[i]=min(count1,count0);
            }
        }
        int res=0;
        for(int i=0;i<n;i++){
            if(arr[i]==-1){
                continue;
            }
            res=max(res,arr[i]);
        }
        cout<<res<<endl;
    }
return 0;
}