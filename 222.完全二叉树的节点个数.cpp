   /* ************************************************************************
   > File Name:     222.完全二叉树的节点个数.cpp
   > Author:        xdp
   > 微信公众号:    861529206@qq.com
   > Created Time:  2022年01月06日 星期四 19时53分04秒
   > Description:   
    ************************************************************************/
   
class Solution
{
public:
    int countNodes(TreeNode* root)
    {
        if(root==NULL)return 0;

        TreeNode* left=root->left;
        TreeNode* right=root->right;

        int leftHeight=0,rightHeight=0;

        while(left)
        {
            left=left->left;
            leftHeight++;
        }

        while(right)
        {
            right=right->right;
            rightHeight++;                                                                       
        }

        if(leftHeight==rightHeight)
        {
            return (2<<leftHeight)-1;
        }

        return countNodes(root->left)+countNodes(root->right)+1;
    }
};

