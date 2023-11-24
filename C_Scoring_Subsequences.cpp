#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
    node(int x){
        data=x;
        left = nullptr;
        right = nullptr;
    }
};

node* insert(int key,node *root)
{
    if(!root){
        node * a = new node(key);
        return a;
    }
    if(key<root->data){
        root->left = insert(key, root->left);
    }
    else{
        root->right = insert(key, root->right);
    }
    return root;
}
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0;i<n;i++){
        cin >> a[i];
    }
    node *root = new node(a[0]);
    for (int i = 1; i < n;i++){
        insert(a[i], root);
    }
    vector<int> ans;
    queue<pair<node*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        int x = q.size();
        for (int i = 0; i < x;i++){
            node *curr = q.front().first;
            int curr_level = q.front().second;
            q.pop();
            if(curr->left){
                if(curr_level%2==0){
                    ans.push_back(curr->left->data);
                }
                q.push({curr->left, curr_level + 1});
            }
            if(curr->right){
                q.push({curr->right, curr_level + 1});
            }
        }
    }
    for(auto i:ans){
        cout << i << " ";
    }
    cout << endl;
    return;
}
int main(){
    solve();
    return 0;
}