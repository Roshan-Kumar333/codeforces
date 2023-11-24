#include<bits/stdc++.h>
using namespace std;
long long count(long long n){
    long long c = 0;
    while(n!=0){
        c++;
        n = n & (n - 1);
    }
    return c;
}
struct node{
    int first;
    int second;
};
int main(){
    long long n, k;
    cin >> n >> k;
    long long *a = new long long[n];
    for (long long i = 0; i < n;i++){
        cin >> a[i];
    }
    long long *b = new long long[n];
    for (long long i = 0; i < n;i++){
        b[i] = count(a[i]);
    }
    stack<pair<int,int>> s;
    for (long long i = 0; i < k;i++){
        while(s.empty()==false && s.top().first<=b[i] ){
            s.pop();
        }
        if(s.empty()){
            node;
            k.first = b[i];
            k.second = i;
            s.push(k);
        }
    }
    cout << a[s.top().second];
    for (int i = k; i < n - k + 1;i++){
        while(s.empty()==false && s.top().first<=b[i]){
            s.pop();
        }
        while(s.top().second<i-k+1){
            s.pop();
        }
        if(s.empty()){
            pair<int, int> k;
            k.first = b[i];
            k.second = i;
            s.push(k);
        }
        cout << a[s.top().second] << " ";
    }
        return 0;
}