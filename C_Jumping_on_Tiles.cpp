#include<bits/stdc++.h>
using namespace std;
bool mycmp(const pair<int, int> &a,const pair<int, int> &b)
{
    return a.first > b.first;
}
void one(string s){
    vector<pair<long long, long long>>m;
    for (long long i = 1; i < s.size()-1;i++){
        if(s[i]>=s[0] && s[i]<=s[s.size()-1]){
            m.push_back({(int)(s[i] - 96), i+1});
        }
    }
    sort(m.begin(), m.end());
    cout << (int)(s[s.size()-1]-s[0]) << " " << m.size()+2 << endl;
    cout << 1 << " ";
    for(auto i:m){
        cout << i.second <<" ";
    }
    cout << s.size() << " ";
    cout << endl;
}
void two(string s){
    vector<pair<long long, long long>> m;
    for (long long i = 1; i < s.size()-1;i++){
        if(s[i]<=s[0] && s[i]>=s[s.size()-1]){
            m.push_back({(int)(s[i] - 96), i + 1});
        }
    }
    sort(m.begin(), m.end(), mycmp);
    cout << (int)(s[0] - s[s.size() - 1]) << " " << m.size()+2 << endl;
    cout << 1 << " ";
    for(auto i:m){
        // cout << i.first << " " << i.second << "here" << endl;
        cout << i.second << " ";
    }
    cout << s.size() << " ";
    cout << endl;
}
void solve(){
    string s;
    cin >> s;
    if(s[0]<=s[s.size()-1]){
        one(s);
    }
    else{
        two(s);
    }
    return;
}
int main(){
    long long t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}