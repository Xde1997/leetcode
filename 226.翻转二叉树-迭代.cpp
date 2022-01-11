/* ************************************************************************
> File Name:     226.翻转二叉树-迭代.cpp
> Author:        xdp
> 微信公众号:    861529206@qq.com
> Created Time:  2022年01月03日 星期一 23时02分39秒
> Description:   
 ************************************************************************/

class Solution
{
 public:
     TreeNode* invertTree(TreeNode* root)
     {
         if(root==NULL) return root;
         stack<TreeNode*> st;
         st.push(root);

         while(!st.empty())
         {
             TreeNode* node = st.top();
             st.pop();
             swap(node->left,node->right);
             if(node->left!=NULL) st.push(node->left);
             if(node->right!=NULL) st.push(node->right);
         }
         return root;
     }
};
