// #include<bits/stdc++.h>
// using namespace std;
// long long moduloMultiplication(long long a, long long b,
//                                long long mod)
// {
//     long long res = 0; // Initialize result

//     // Update a if it is more than
//     // or equal to mod
//     a %= mod;

//     while (b)
//     {
//         // If b is odd, add a with result
//         if (b & 1)
//             res = (res + a) % mod;

//         // Here we assume that doing 2*a
//         // doesn't cause overflow

//         a = 2*a % mod;

//         b >>= 1; // b = b / 2
//     }

//     return res;
// }
// void solve(){
//     long long n;
//     cin >> n;


//     long long mod = 1e9+7;
//     long long ans = 0;
//     long long per = 1;
//     long long one = 0;

//     for (long long i = 1; i <= n;i++){
//         per = moduloMultiplication(per, i, mod);
//         // cout << per <<" "<<i<< endl;
//         one = (one + ((i - 1) * 2)) % mod;
//     }
//     ans = moduloMultiplication(one, per, mod);
//     cout << ans << endl;
// }
// int main(){
//     long long t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }

// cp template
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ull unsigned long long
#define ll long long
#define mod 1000000007
#define endl "\n"
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define limit 100000
#define setBit(x) __builtin_popcount(x)

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;

typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_multiset;

ll euclidGcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }

    return euclidGcd(b, a % b);
}

ll modExp(ll a, ll b, ll c)
{
    if (a == 0)
    {
        return 0LL;
    }
    if (b == 0)
    {
        return 1LL;
    }

    if (b % 2 == 1)
    {
        ll cur = modExp(a, b / 2, c);
        ll ans = (cur * cur) % mod;
        ans = (ans * a) % mod;

        return ans;
    }
    else
    {
        ll cur = modExp(a, b / 2, c);
        ll ans = (cur * cur) % mod;

        return ans;
    }
}

ll factorial(ll n)
{
    ll ans = 1LL;
    for (ll i = 2LL; i <= n; i++)
    {
        ans = (ans * i) % mod;
    }
    return ans;
}

ll ncr(ll n, ll r)
{
    ll c1 = factorial(n);
    ll c2 = factorial(r);
    ll c3 = factorial(n - r);
    ll cur = (c2 * c3) % mod;

    ll ans = (c1 * modExp(cur, mod - 2, mod)) % mod;

    return ans;
}

int makeSieve(int n)
{
    if (n <= 1)
        return false;

    bool isPrime[n + 1] = {0};
    isPrime[0] = true;
    isPrime[1] = true;

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        if (isPrime[i] == true)
        {
            count++;
        }
    }
    return count;
}

vector<pair<ll, ll>> findPrimeFact(ll n)
{
    vector<pair<ll, ll>> ans;
    for (ll i = 2LL; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ll count = 0LL;
            while (n % i == 0)
            {
                count++;
                n /= i;
            }
            ans.push_back({i, count});
        }
    }

    if (n > 1)
        ans.push_back({n, 1});
    return ans;
}

vector<ll> findFactor(ll n)
{
    vector<ll> ans;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            if (n / i != i)
                ans.push_back(n / i);
        }
    }

    return ans;
}

bool isOdd(int n)
{
    return (n & 1);
}

ll nCr(ll n, ll r)
{
    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, 0LL));
    dp[0][0] = 1;

    for (ll i = 1LL; i <= n; i++)
    {
        dp[i][0] = 1;
        if (i <= r)
            dp[i][i] = 1;
        for (ll j = 1LL; j < i; j++)
        {
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }

    return dp[n][r];
}

ll findMinIdx(vector<pair<ll, ll>> &dist, vector<bool> &visited)
{
    int idx = -1;
    for (int i = 1; i < dist.size(); i++)
    {
        if (!visited[i] && (idx == -1 || dist[i].first < dist[idx].first))
        {
            idx = i;
        }
    }

    return idx;
}

vector<int> dijkstra(vector<vector<ll>> &edges, int n)
{
    vector<pair<ll, ll>> dist(n + 1, {INT_MAX, -1});
    vector<bool> visited(n + 1, 0);
    dist[1] = {0, -1};

    for (int i = 0; i < n - 1; i++)
    {
        ll curIdx = findMinIdx(dist, visited);
        visited[curIdx] = 1;
        for (auto it : edges)
        {
            if (it[0] == curIdx)
            {
                if (dist[curIdx].first + it[2] < dist[it[1]].first)
                {
                    dist[it[1]].first = dist[curIdx].first + it[2];
                    dist[it[1]].second = curIdx;
                }
            }
        }
    }

    vector<int> ans;
    int prev = n;
    while (prev != -1)
    {
        ans.push_back(prev);
        prev = dist[prev].second;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll n, m;
    cin >> n >> m;

    ll ans = ((4 * (n * (n - 1)) % m) % m + 2) % m;

    cout << ans << endl;
    return 0;
}