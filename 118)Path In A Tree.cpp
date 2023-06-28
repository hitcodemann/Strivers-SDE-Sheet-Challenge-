#include <bits/stdc++.h> 
vector<int> pathInATree(TreeNode<int> *root, int x)
{
    vector<int>ans;
    int t = x;
    unordered_map<int,int>map;
    map.insert({root->data, -1});
    queue<TreeNode<int>*>q;
    q.push(root);
    while(!q.empty()){
        int sz = q.size();
        for(int i = 0; i < sz; i++){
            root = q.front();
            q.pop();
            if(root->left){
                q.push(root->left);
                map.insert({root->left->data , root->data});
            }
            if(root->right){
                q.push(root->right);
                map.insert({root->right->data, root->data});
            }
        }
    }
    while(map[x] != -1){
        ans.push_back(map[x]);
        x = map[x];
    }
    reverse(ans.begin(), ans.end());
    ans.push_back(t);
    return ans;
}
