#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *l;
    node *r;
    node(int data)
    {
        this->data = data;
        l = r = NULL;
    }
};

int ans = 0;

node *insert(node *root, int data)
{
    if (root == NULL)
    {
        return new node(data);
    }
    else
    {
        node *cur;
        if (data <= root->data)
        {
            cur = insert(root->l, data);
            root->l = cur;
        }
        else
        {
            cur = insert(root->r, data);
            root->r = cur;
        }
        return root;
    }
}
bool myCmp(pair<node*,bool>a, pair<node*,bool>b){
    return a.first->data < b.first->data;
}
void solve(node* root,int k){
    vector<pair<node *,bool>> inorder;
    queue<node*> q;
    inorder.push_back({root, false});
    q.push(root);
    while(!q.empty()){
        int x = q.size();
        for (int i = 0; i < x;i++){
            node *curr = q.front();
            q.pop();
            if(curr->l){
                q.push(curr->l);
                inorder.push_back({curr->l, true});
            }
            if(curr->r){
                q.push(curr->r);
                inorder.push_back({curr->r, false});
            }
        }
    }
    sort(inorder.begin(), inorder.end(), myCmp);
    bool flag = false;
    for(auto i:inorder){
        if(flag && i.second){
            if(!i.first->l && !i.first->r){
                cout << i.first->data << endl;
                return;
            }
        }
        if(i.first->data==k){
            flag = true;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int k;
    cin >> k;
    node *root = NULL;
    for (auto it : nums)
    {
        root = insert(root, it);
    }
    solve(root,k);
    // cout << endl;
    return 0;
}