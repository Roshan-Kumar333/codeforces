#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int* a = new int[n];
        unordered_map<int,int>m;
        for(long long   i=0;i<n;i++){
            cin>>a[i];
            a[i]-=i;
            m[a[i]]++;
        }
        long long ans=0;
        for(auto i:m){
            if(i.second>1){
                long long x = i.second-1;
                ans+=((x*(x+1))/2);
            }
        }
        cout<<ans<<endl;
    }
return 0;
}