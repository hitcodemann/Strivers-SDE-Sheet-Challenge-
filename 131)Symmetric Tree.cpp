#include<bits/stdc++.h>

bool isSymmetric(BinaryTreeNode<int>* root){
    if(root == NULL || (root != NULL && root->left == NULL && root->right == NULL)){
        return true;
    }
    map<int,map<int,vector<int>>> m;
    queue<pair<BinaryTreeNode<int>*,pair<int,int>>> q;
    q.push(make_pair(root,make_pair(0,0)));
    while(!q.empty()){
        pair<BinaryTreeNode<int>*,pair<int,int>> p = q.front();
        q.pop();
        BinaryTreeNode<int>* node = p.first;
        int hv = p.second.first;
        int lvl = p.second.second;
//         cout<<node->data<<endl;
        m[hv][lvl].push_back(node->data);
        if(node->left != NULL){
            q.push(make_pair(node->left,make_pair(hv-1,lvl+1)));
        }
        if(node->right != NULL){
            q.push(make_pair(node->right,make_pair(hv+1,lvl+1)));
        }
    }
    for(auto i:m){
        int hv = i.first;
        for(auto j:i.second){
            int lvl = j.first;
            if(m[-(hv)].count(lvl)>0){
                int s1 = m[hv][lvl].size();
                int s2 = m[-hv][lvl].size();
                if(s1 != s2){
                    return false;
                }else{
                    int k = 0;
                    int l = s2-1;
                    while(k<s1 && l>=0){
                        if(m[hv][lvl][k++] != m[-hv][lvl][l--]){
                            return false;
                        }
                    }
                }
                m[hv].erase(lvl);
                m[-hv].erase(lvl);
            }else{
                return false;
            }
        }
    }
    return true;
}
