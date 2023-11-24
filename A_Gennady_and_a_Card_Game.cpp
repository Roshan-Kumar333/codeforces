#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string a,b,c,d,e;
    cin>>s>>a>>b>>c>>d>>e;
    bool x= ((s[0]==a[0]) || (s[0]==b[0])||(s[0]==c[0])||(s[0]==d[0])||(s[0]==e[0]));
    bool y = ((s[1]==a[1]) || (s[1]==b[1])||(s[1]==c[1])||(s[1]==d[1])||(s[1]==e[1]));
    if(x||y){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
return 0;
}