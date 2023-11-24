#include <bits/stdc++.h>
using namespace std;

pair<long long, long long> getPF(long long n)
{
    long long maxPrime = -1;
    long long minPrime = -1;
    while (n % 2 == 0)
    {
        maxPrime = 2;
        if (minPrime == -1)
            minPrime = maxPrime;
        n >>= 1;
    }
    while (n % 3 == 0)
    {
        maxPrime = 3;
        if (minPrime == -1)
            minPrime = maxPrime;
        n = n / 3;
    }
    for (int i = 5; i <= sqrt(n); i += 6)
    {
        while (n % i == 0)
        {
            maxPrime = i;
            if (minPrime == -1)
                minPrime = maxPrime;
            n = n / i;
        }
        while (n % (i + 2) == 0)
        {
            maxPrime = i + 2;
            if (minPrime == -1)
                minPrime = maxPrime;
            n = n / (i + 2);
        }
    }
    if (n > 4)
    {
        maxPrime = n;
        if (minPrime == -1)
            minPrime = maxPrime;
    }

    return {minPrime, maxPrime};
}

int main()
{
    int t;
    cin >> t;
    int k = 0;
    int mn = INT_MAX, mx = INT_MIN;
    int str_arr[t];
    int end_arr[t];
    int p[t];
    while (k < t)
    {
        cin >> str_arr[k] >> end_arr[k] >> p[k];
        mn = min(mn, str_arr[k]);
        mx = max(mx, end_arr[k]);
        k++;
    }
    int n = mx - mn + 1;
    vector<pair<long long, long long>> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = getPF(mn + i);
    }
    k = 0;
    while (k < t)
    {
        int c = 0;
        for (int i = str_arr[k] - mn; i <= end_arr[k] - mn; i++)
        {
            if (arr[i].first <= p[k] && arr[i].second <= p[k])
            {
                c++;
            }
        }
        if (c == 0)
        {
            cout << -1;
        }
        else
        {
            cout << c;
        }
        cout << endl;
        k++;
    }
    return 0;
}