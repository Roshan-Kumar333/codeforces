#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int>a;
    for(int i=0;i<s.length();i++){
        if(s[i]!='+'){
            int x = s[i]-'1'+1;
            a.push_back(x);
        }
    }
    sort(a.begin(),a.end());
    for(int i =0;i<a.size()-1;i++){
        cout<<a[i]<<"+";
    }
    cout<<a[a.size()-1];
return 0;
}