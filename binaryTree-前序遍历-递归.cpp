/* ************************************************************************
> File Name:     binaryTree-前序遍历-递归.cpp
> Author:        xdp
> 微信公众号:    861529206@qq.com
> Created Time:  2022年01月03日 星期一 16时49分17秒
> Description:   
 ************************************************************************/

#include "./treenode.h"

class Solution
{
public:
    void traversal(TreeNode* cur,vector<int>& vec)
    {
        if(cur==NULL)return;
        vec.push_back(cur->val);
        traversal(cur->left,vec);
        traversal(cur->right,vec);
    }

    vector<int> preorderTraversal(TreeNode* root)
    {
        vector<int> result;
        traversal(root,result);
        return result;
    }
};
