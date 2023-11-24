#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a;
    cin>>n>>m>>a;
    long long x,y;
    if(n%a==0){
        x=n/a;
    }
    else{
        x=n/a+1;
    }
    if(m%a==0){
        y=m/a;
    }
    else{
        y=m/a+1;
    }
    unsigned long long int res=x*y;
    cout<<res<<endl;
return 0;
}