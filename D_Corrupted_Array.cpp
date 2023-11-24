#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long *b = new long long[n + 2];
        for (long long i = 0; i < n+2;i++){
            cin >> b[i];
        }
        sort(b, b + n + 2);
        long long sum = 0;
        for (long long i = 0; i < n;i++){
            sum += b[i];
        }
        unordered_map<long long, long long> m;
        for (long long i = 0; i < n + 1;i++){
            m[b[i]]++;
        }
        if(sum==b[n] || sum==b[n+1]){
            for (long long i = 0; i < n;i++){
                cout << b[i] << " ";
            }
        }
        else if(m.find(sum+b[n]-b[n+1])!=m.end()){
            m[sum + b[n] - b[n + 1]]--;
            for(auto i:m){
                while(i.second--){
                    cout << i.first << " ";
                }
            }
        }
        else{
            cout << -1;
        }
        cout << endl;
    }
    return 0;
}