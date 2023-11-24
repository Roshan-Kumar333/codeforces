#include <bits/stdc++.h>
using namespace std;
void reverse(vector<long long> &v)
{
    long long n = v.size();
    long long end = n - 1;
    long long start = 0;
    while (start <= end)
    {
        swap(v[start], v[end]);
        end--;
        start++;
    }
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, s;
        cin >> a >> s;
        vector<long long> ans;
        while (a && s)
        {
            int a_last = a % 10;
            int s_last = s % 10;
            s /= 10;
            a /= 10;
            if (a_last > s_last)
            {
                int x = (s % 10) * 10;
                s /= 10;
                s_last += x;
                int difference = s_last - a_last;
                if (difference >= 10 || difference < 0)
                {
                    ans.clear();
                    ans.push_back(-1);
                    break;
                }
                else
                {
                    ans.push_back(difference);
                }
            }
            else
            {
                int difference = s_last - a_last;
                ans.push_back(difference);
            }
        }

        if (a > s)
        {
            ans.clear();
            ans.push_back(-1);
        }
        else if (s > a && ans[0] != -1)
        {
            ans.push_back(s);
        }
        long long n = ans.size();
        long long i = 0;
        while (ans[n - 1 - i] == 0)
        {
            ans.pop_back();
            i++;
        }
        reverse(ans);
        for (auto i : ans)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}