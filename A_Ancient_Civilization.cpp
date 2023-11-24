#include<bits/stdc++.h>
using namespace std;
int countSetBits(int n){
    int count=0;
    while(n){
        n=n^(n-1);
        count++;
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l;
        cin>>n>>l;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int resulting_xor;
        int res=INT_MAX;
        for(int i=0;i<pow(2,l);i++){
            int distance_sum=0;
            for(int j=0;j<n;j++){
                resulting_xor=arr[j]^i;
                distance_sum+=countSetBits(resulting_xor);
            }
            res=min(res,distance_sum);
        }
        cout<<res<<endl;
    }
return 0;
}