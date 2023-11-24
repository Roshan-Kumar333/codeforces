// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// void solve(){
//     ll n;
//     cin >> n;
//     while
// }
// int main(){
//     ll t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// void dfs(vector<char> &a, set<char> &s, int curr, int prev, int curr_lev, int &ans, int n)
// {
//     if (curr >= n)
//     {
//         return;
//     } return;
//     }
//     cout << curr << endl;
//     if (s.find(a[curr]) != s.end())
//     {
//         // cout << curr << "here" << endl;
//         if (prev == -1)
//         {
//             prev = curr_lev;
//         }
//         ans = max(ans, curr_lev - prev + 1);
//     }

// }
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<char> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     set<char> s;
//     s.insert('a');
//     s.insert('e');
//     s.insert('i');
//     s.insert('o');
//     s.insert('u');
//     int ans = 0;
//     dfs(a, s, 0, -1, -1, ans, n);
//     cout << ans << endl;
// }
// int main()
// {
//     solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;

int n;
int g[MAXN][MAXN], match[MAXN], vis[MAXN];

bool dfs(int u)
{
    for (int v = 0; v < n; v++)
    {
        if (g[u][v] && !vis[v])
        {
            vis[v] = 1;
            if (match[v] == -1 || dfs(match[v]))
            {
                match[v] = u;
                return true;
            }
        }
    }
    return false;
}

int max_matching()
{
    memset(match, -1, sizeof(match));
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        memset(vis, 0, sizeof(vis));
        if (dfs(i))
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> g[i][j];
        }
    }
    int ans = max_matching();
    cout << ans << endl;
    return 0;
}