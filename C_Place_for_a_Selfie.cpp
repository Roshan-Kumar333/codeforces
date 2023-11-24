// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// ll help(vector<ll> &k, ll temp, ll temp2)
// {
//     ll start = 0;
//     ll end = k.size() - 1;
//     while (start <= end)
//     {
//         ll mid = start + (end - start) / 2;
//         ll x = (k[mid] * k[mid]) - (temp2 * k[mid]);
//         cout << "x = " << x << endl;
//         if (x == temp)
//         {
//             return k[mid];
//         }
//         if (x > temp)
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }
//     return -1;
// }
// void solve()
// {
//     ll n, m;
//     cin >> n >> m;
//     vector<ll> k(n);
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> k[i];
//     }
//     sort(k.begin(), k.end());
//     vector<vector<ll>> abc(m, vector<ll>(3));
//     for (ll i = 0; i < m; i++)
//     {
//         for (ll j = 0; j < 3; j++)
//         {
//             cin >> abc[i][j];
//         }
//         ll temp = (4 * abc[i][0] * abc[i][2]) - (abc[i][1] * abc[i][1]);
//         cout << "temp = " << temp << endl;
//         ll temp2 = 2 * abc[i][1];
//         ll p = help(k, temp, temp2);
//         if (p == -1)
//         {
//             cout << "NO" << endl;
//         }
//         else
//         {
//             cout << "YES" << endl;
//             cout << p << endl;
//         }
//     }
//     return;
// }
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int curr = 1;
//     int curr_ind = 0;
//     bool rev = false;
//     while (curr_ind < n)
//     {
//         int last_index = curr_ind + curr;
//         if (last_index >= n)
//         {
//             last_index = n;
//         }
//         if (!rev)
//         {
//             for (int i = curr_ind; i < last_index; i++)
//             {
//                 cout << a[i] << " ";
//             }
//         }
//         else
//         {
//             for (int i = last_index - 1; i >= 0 && i >= curr_ind; i--)
//             {
//                 cout << a[i] << " ";
//             }
//         }
//         curr_ind += curr;
//         curr *= 2;
//         rev = !rev;
//     }
// }
// int main()
// {
//     solve();
//     return 0;
// }
#include<iostream>
#include <string>
    using namespace std;

// structure for a node in the binary tree
struct Node
{
    char val;
    Node *left;
    Node *right;
    int level;
};

// utility function to create a new node
Node *newNode(char ch)
{
    Node *node = new Node;
    node->val = ch;
    node->left = node->right = NULL;
    return node;
}

// function to traverse the binary tree in depth-first manner
void dfs(Node *node, string &str, int &max_len, int curr_level, char start_vowel)
{
    if (node == NULL)
    {
        return;
    }
    // if the current node is a vowel
    if (node->val == 'a' || node->val == 'e' || node->val == 'i' || node->val == 'o' || node->val == 'u')
    {
        // if the starting vowel hasn't been set yet, set it to the current vowel
        if (start_vowel == '\0')
        {
            start_vowel = node->val;
        }
        // if the current vowel is different than the starting vowel
        else if (start_vowel != node->val)
        {
            // check if the length of the substring is greater than the current maximum length
            if (curr_level - node->level > max_len)
            {
                max_len = curr_level - node->level;
            }
        }
    }
    // add the current node's value to the substring and update its level
    str.push_back(node->val);
    node->level = curr_level;
    // recursively traverse the left and right children nodes
    dfs(node->left, str, max_len, curr_level + 1, start_vowel);
    dfs(node->right, str, max_len, curr_level + 1, start_vowel);
    // remove the current node's value from the substring
    str.pop_back();
}

// function to find the length of the longest substring with the given criteria
int longestVowelSubstring(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    string str;      // to keep track of the substring
    int max_len = 0; // to keep track of the maximum length found so far
    dfs(root, str, max_len, 0, '\0');
    return max_len;
}

// driver code to test the above functions
int main()
{
    Node *root = newNode('a');
    root->left = newNode('e');
    root->right = newNode('i');
    root->left->left = newNode('o');
    root->left->right = newNode('u');
    root->right->left = newNode('x');
    root->right->right = newNode('y');
    cout << "Length of the longest vowel substring: " << longestVowelSubstring(root) << endl;
    return 0;
}