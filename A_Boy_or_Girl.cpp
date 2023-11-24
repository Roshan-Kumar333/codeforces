#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count;
    for(int i=0;i<s.length();i++){
        count=0;
        for(int j=0;j<s.length();j++){
            if(s[i]!=s[j]){
                count++;
            }
        }
        if(count)
    }
return 0;
}