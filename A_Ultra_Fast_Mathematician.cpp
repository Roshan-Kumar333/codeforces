#include<bits/stdc++.h>
using namespace std;
int main(){
    string str_x;
    string str_y;
    cin>>str_x;
    cin>>str_y;
    int ans;
    for(int i=0;i<str_x.length();i++){
        ans=int(str_x[i])^int(str_y[i]);
        cout<<ans;
    }
return 0;
}