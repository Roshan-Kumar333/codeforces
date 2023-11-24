#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int * a = new int[4];
        for(int i=0;i<4;i++){
            cin>>a[i];
        }
        int largest=INT_MIN;
        int secondLargest=INT_MIN;
        for(int i=0;i<4;i++){
            if(a[i]>largest){
                secondLargest=largest;
                largest=a[i];
            }
            else if(secondLargest<a[i]){
                secondLargest=a[i];
            }
        }
        if((a[0]==largest || a[1]==largest) && (a[0]==secondLargest || a[1]==secondLargest)){
            cout<<"NO"<<endl;
        }
        else if((a[3]==largest || a[2]==largest) && (a[3]==secondLargest || a[2]==secondLargest)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
return 0;
}