/* ************************************************************************
> File Name:     226.翻转二叉树.cpp
> Author:        xdp
> 微信公众号:    861529206@qq.com
> Created Time:  2022年01月03日 星期一 22时52分39秒
> Description:   
 ************************************************************************/

#include "./treenode.h"

class Solution
{
public:
    TreeNode* invertTree(TreeNode* root)
    {
        if(root==NULL) return root;
        swap(root->left,root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
}
