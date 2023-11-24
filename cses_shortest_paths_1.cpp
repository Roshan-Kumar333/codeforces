#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(m, vector<ll>(3));
    vector<vector<pair<ll, ll>>> adj(n);
    for (ll i = 0; i < m;i++){
        for (ll j = 0; j < 3;j++){
            cin >> a[i][j];
        }
        adj[a[i][0]].push_back({a[i][1], a[i][2]});
    }
    vector<ll> dis(n, INT_MAX);
    dis[0]=0;
    priority_queue<pair<ll, ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> q;
    q.push({0, 0});
    while(!q.empty()){
        ll curr_ind = q.top().first;
        ll curr_dis = q.top().second;
        q.pop();
        for(auto i:adj[curr_ind]){
            ll temp = curr_dis + i.second;
            if(dis[i.first]>=temp){
                dis[i.first] = temp;
                q.push({i.first, temp});
            }
        }
    }
    for(auto i:dis){
        cout << i << " ";
    }
    cout << endl;
}
int main(){
    solve();
    return 0;
}