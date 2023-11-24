#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    int* a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<int>>v(q);
    int element;
    vector<int>temp;
    for(int i=0;i<q;i++){
        cin>>element;
        if(element==1){
            temp.push_back(1);
            for(int i=0;i<2;i++){
                cin>>element;
                temp.push_back(element);
            }
        }
    }
return 0;
}