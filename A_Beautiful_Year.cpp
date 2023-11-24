#include<bits/stdc++.h>
using namespace std;
bool is_distinct(int year){
    int a=year%10;
    year/=10;
    int b=year%10;
    year/=10;
    int c=year%10;
    year/=10;
    int d=year%10;
    year/=10;
    if((a==b)||(a==c)||(a==d)){
        return false;
    }
    else if((b==c)||(b==d)){
        return false;
    }
    else if(c==d){
        return false;
    }
    else{
        return true;
    }
}
int main(){
    int year;
    cin>>year;
    year++;
    while(!is_distinct(year)){
        year++;
    }
    cout<<year;
return 0;
}