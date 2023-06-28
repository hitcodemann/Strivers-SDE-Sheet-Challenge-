#include <bits/stdc++.h> 
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    if(root==NULL)
        return {{}};
    vector<int> pre,in,post;
    stack<pair<BinaryTreeNode<int>*,int>> st;
    st.push({root,1});
    while(!st.empty())
    {
        auto it = st.top();
        st.pop();
        if(it.second == 1)  // preorder // because in preorder root pos is 1(root,left,right
        {
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->left)
                st.push({it.first->left,1});
        }
        else if(it.second == 2)  // inorder // because in inorder root pos is 2(root,left,right)
        {
            in.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->right)
                st.push({it.first->right,1});
        }
        else    // postorder    // because in postorder root pos is 3(root,left,right)
        {
            post.push_back(it.first->data);
        }
    }
    return {in,pre,post};
}
