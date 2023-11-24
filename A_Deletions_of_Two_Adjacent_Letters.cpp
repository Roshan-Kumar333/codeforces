#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        char c;
        cin>>c;
        vector<int>pos;
        int n =s.length();
        for(int i=0;i<s.length();i++){
            if(c==s[i]){
                pos.push_back(i);
            }
        }
        bool flag =false;
        if(pos.empty()){
            cout<<"NO"<<endl;
            flag = true;
        }
        else{
            for(auto i : pos){
                if(i%2==0 && (n-i-1)%2==0){
                    cout<<"YES"<<endl;
                    flag = true;
                    break;
                }
            }

        }
        if(!flag){
            cout<<"NO"<<endl;
        }
    }
return 0;
}