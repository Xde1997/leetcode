/* ************************************************************************
> File Name:     111.二叉树的最小深度.cpp
> Author:        xdp
> 微信公众号:    861529206@qq.com
> Created Time:  2022年01月06日 星期四 19时07分06秒
> Description:   
 ************************************************************************/

class Solution
{
public:
    int getDepth(TreeNode* root)
    {
        if(root==NULL)return 0;
        int leftDepth=getDepth(root->left);
        int rightDepth=getDepth(root->right);

        if(root->left==NULL&&root->right!=NULL)return 1+rightDepth;
        if(root->left!=NULL&&root->right==NULL)return 1+leftDepth;

        return 1+min(leftDepth,rightDepth);

    }

    int minDepth(TreeNode* root)
    {
        return getDepth(root);
    }
    
};
