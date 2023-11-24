#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int count=0;
    long long digit;
    while(n){
        digit=n%10;
        n/=10;
        if(digit==4){
            count++;
        }
        else if(digit==7){
            count++;
        }
        else{
            continue;
        }
    }
    if((count==4)||(count==7)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

return 0;
}