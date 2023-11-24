#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n,m;
    cin>>n>>m;
    n++;
    while(n<=m){
        if(isPrime(n)){
            break;
        }
        n++;
    }
    if(n==m){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
return 0;
}