#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
    int start=0;
    int end=s.length()-1;
    while(start<=end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k==0){
            cout<<1<<endl;
            continue;
        }
        if(isPalindrome(s)){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
return 0;
}