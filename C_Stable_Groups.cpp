#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,k,x;
    cin>>n>>k>>x;
    long long *a= new long long[n];
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    vector<long long>break_points;
    sort(a,a+n);
    for(long long i=1;i<n;i++){
        long long diff=a[i]-a[i-1];
        if(diff>x){
            if(diff%x==0){
                break_points.push_back((diff/x)-1);
            }
            else{
                break_points.push_back(diff/x);
            }
        }
    }
    long long ans=break_points.size();
    sort(break_points.begin(),break_points.end());
    for(auto i:break_points){
        if(i<=k){
            k-=i;
            ans--;
        }
    }
    cout<<ans+1<<endl;
return 0;
}