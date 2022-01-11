/* ************************************************************************
> File Name:     101.对称二叉树-迭代.cpp
> Author:        xdp
> 微信公众号:    861529206@qq.com
> Created Time:  2022年01月05日 星期三 19时25分28秒
> Description:   
 ************************************************************************/
class Solution
{
public:     
    bool isSymmetric(TreeNode* root){
        if(root==NULL) return true;          
        queue<TreeNode*> que;
        que.push(root->left);
        que.push(root->right);

        while(!que.empty())
        {
            TreeNode* leftNode=que.front();
            que.pop();
            TreeNode* rightNode=que.front();
            que.pop();

            if(!leftNode && !rightNode)
            {
                continue;
            }

            if(!leftNode||!rightNode||(leftNode->val!=rightNode->val))
            {
                return false;
            }

            que.push(leftNode->left);
            que.push(rightNode->right);
            que.push(leftNode->right);
            que.push(rightNode->left);
        }
        return true;
    }                          
};  
