#include <bits/stdc++.h> 
void rec(TreeNode<int>* root,int &k,int &ans)
{
    if(!root)
    return ;
    rec(root->right,k,ans);
    k--;
    if(k==0)
    {
        ans=root->data;
        return;
    }
    rec(root->left,k,ans);
}
int KthLargestNumber(TreeNode<int>* root, int k) 
{
    int ans=-1;
    rec(root,k,ans);
    return ans;
}
