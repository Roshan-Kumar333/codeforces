#include <bits/stdc++.h>
using namespace std;


void code()
{
    int n;
    string s;
    cin >> n >> s;
    map<char, bool> m;
    string res = "";

    for (int i = 0; i < 26; i++)
    {
        m[char(i + 97)] = false;
    }

    for (int i = 0; i < n; i++)
    {
        m[s[i]] = true;
    }

    // when all letters won't exist
    for (auto it : m)
    {
        if (it.second == false)
        {
            res = it.first;
            cout << res << endl;
            return;
        }
    }

    for (auto it : m)
    {
        it.second = false;
    }
    res = "a";
    int lastA;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            lastA = i;
            m[s[i + 1]] = true;
        }
    }

    for (int i = lastA + 2; i < n; i++)
    {
        if (m[s[i]] == false)
        {
            cout << s[i] << endl;
            res += s[i];
            cout << res << endl;
            return;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        code();
    }

    return 0;
}
