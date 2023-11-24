#include<bits/stdc++.h>
using namespace std;
void fill(vector<vector<char>> &a, long long n)
{
    for (long long i = 0; i < n; i++)
    {
        vector<char> temp;
        for (long long j = 0; j < n; j++)
        {
            temp.push_back('.');
        }
        a.push_back(temp);
    }
}
void solve(){
    long long n, k, r, c;
    cin >> n >> k >> r >> c;
    vector<vector<char>> a;
    fill(a, n);
    
}
int main(){
return 0;
}