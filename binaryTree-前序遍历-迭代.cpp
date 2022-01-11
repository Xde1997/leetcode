/* ************************************************************************
> File Name:     binaryTree-前序遍历-迭代.cpp
> Author:        xdp
> 微信公众号:    861529206@qq.com
> Created Time:  2022年01月03日 星期一 16时58分21秒
> Description:   
 ************************************************************************/


#include "./treenode.h"

class Solution
{
public:
    vector<int> preorderTraversal(TreeNode* root)
    {
        stack<TreeNode*> st;
        vector<int> result;
        if(root==NULL)return result;
        st.push(root);
        while(!st.empty())
        {
            TreeNode* node=st.top();
            st.pop();
            result.push_back(node->val);
            if(node->right) st.push(node->right);
            if(node->left) st.push(node->left);
        }
        return result;
    }
};
