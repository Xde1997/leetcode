/* ************************************************************************
> File Name:     104.二叉树的最大深度.cpp
> Author:        xdp
> 微信公众号:    861529206@qq.com
> Created Time:  2022年01月05日 星期三 19时40分44秒
> Description:   
 ************************************************************************/

class Solution
{
public:
    int maxdepth(TreeNode* root)
    {
        return GetDepth(root);
    }

    int GetDepth(TreeNode* node)
    {
        if(node==NULL)return 0;
        int leftDepth=GetDepth(node->left);
        int rightDepth=GetDepth(node->right);
        int maxDepth=1+max(leftDepth,rightDepth);

        return maxDepth;
    }
};
