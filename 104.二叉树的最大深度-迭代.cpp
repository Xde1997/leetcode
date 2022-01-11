/* ************************************************************************
> File Name:     104.二叉树的最大深度-迭代.cpp
> Author:        xdp
> 微信公众号:    861529206@qq.com
> Created Time:  2022年01月05日 星期三 19时54分27秒
> Description:   
 ************************************************************************/

class Solution
{
public:
    int maxdepth(TreeNode* root)
    {
        if(root==NULL) return 0;
        int depth=0;
        queue<TreeNode*> que;
        que.push(root);

        while(!que.empty())
        {
            int size=que.size();
            depth++;
            for(int i=0;i<size;i++)
            {
                TreeNode* node=que.front();
                que.pop();
                if(node->left) que.push(node->left);
                if(node->right) que.push(node->right);
            }
        }
        return depth;
    }
};
