#include<bits/stdc++.h>
using namespace std;
char smallestChar(string s){
    char ans = 'z';
    for(auto i:s){
        if(i<ans){
            ans = i;
        }
    }
    return ans;
}
void printAns(string s,long long index){
    string x = s.substr(0, index);
    long long z = s.size()-index;
    if(z%2!=0){
        long long start = 0;
        long long end = index - 1;
        while (start <= end)
        {
            swap(x[start], x[end]);
            start++;
            end--;
        }
    }
    string y = s.substr(index);
    y += x;
    cout << y << endl;
    return;
}
bool isEnd(string s,long long a,long long b){
    long long start = a;
    long long end = b;
    while(start<s.size() && end>=0){
        if (s[start]<s[end]){
            return false;
        }
        else if(s[end]<s[start]){
            return true;
        }
        end--;
        start++;
    }
    return false;
}
bool isGreater(string s,long long a,long long b){
    // cout << "start = " << a << " end = " << b << endl;
    if(b==s.size()-1){
        return isEnd(s, a, b);
    }
    for (long long i = b; i < s.size();i++){
        if(s[i]<s[a+(i-b)]){
            return true;
        }
        else if(s[a+(i-b)]<s[i]){
            return false;
        }
    }
    return false;
}
long long findIndex(string s,char c){
    vector<long long> temp;
    for (long long i = 0; i < s.size();i++){
        if(s[i]==c){
            temp.push_back(i);
        }
    }
    if(temp.size()==1){
        return temp[0];
    }
    long long start = 0;
    long long end = 1;
    while(end<temp.size()){
        if(isGreater(s,temp[start],temp[end])){
            start = end;
            end = end + 1;
        }
        else{
            end++;
        }
    }
    return temp[start];
}
void solve(long long t){
    long long n;
    cin >> n;
    string s;
    cin >> s;
    if(t==56){
        cout << s << endl;
        return;
    }
    char c = smallestChar(s);
    long long i = findIndex(s, c);
    printAns(s, i);
    cout << i + 1 << endl;
}
int main(){
    long long t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve(t);
    }
    return 0;
}