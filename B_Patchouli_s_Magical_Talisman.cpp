#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> a;
        long long element;
        bool flag = false;
        long long evenCount = 0;
        long long sum = 0;
        for (long long i = 0; i < n;i++){
            cin >> element;
            a.push_back(element);
            if(a[i]%2!=0){
                flag = true;
            }
            else{
                evenCount++;
            }
            sum += a[i];
        }
        long long ans = 0;
        if(flag){
            cout << evenCount << endl;
        }
        else{
            while(sum%2==0){
                sum /= 2;
                ans++;
            }
            ans += n - 1;
            cout << ans << endl;
        }
    }
    return 0;
}