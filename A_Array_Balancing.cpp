#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int*a = new int[n];
        int*b= new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        long long sum=0;
        for(int i=1;i<n;i++){
            if((abs(a[i-1]-a[i])+abs(b[i-1]-b[i]))>(abs(a[i-1]-b[i])+abs(b[i-1]-a[i]))){
                swap(a[i],b[i]);
            }
        }
        for(int i=0;i<n-1;i++){
            sum+=abs(a[i]-a[i+1]);
            sum+=abs(b[i]-b[i+1]);
        }
        cout<<sum<<endl;
    }
return 0;
}