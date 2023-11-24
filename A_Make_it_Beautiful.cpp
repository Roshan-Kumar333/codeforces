#include<bits/stdc++.h>
using namespace std;
bool myCmp(long long a,long long b){
    return a>b;
}
void solve(){
    long long n;
    cin>>n;
    vector<long long>a(n);
    map<long long,long long>m;
    for(long long i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    sort(a.begin(),a.end(),myCmp);
    if(m.size()==1 && n>=2){
        cout<<"NO"<<endl;
        return;
    }
    swap(a[1],a[n-1]);
    cout<<"YES"<<endl;
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    long long t;
    cin>>t;
    while (t--)

    {
        /* code */
        solve();
    }
    
return 0;
}