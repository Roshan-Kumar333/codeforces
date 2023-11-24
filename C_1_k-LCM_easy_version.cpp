#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(n%3==0){
            cout<<n/3<<" "<<n/3<<" "<<n/3<<endl;
        }
        else if(n%2==0){
            if(n%4==0){
                cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
            }
            else{
                cout<<2<<" "<<n/2-1<<" "<<n/2-1<<endl;
            }
        }
        else if(n%2!=0){
            cout<<n/2<<" "<<n/2<<" "<<1<<endl;
        }
    }
return 0;
}