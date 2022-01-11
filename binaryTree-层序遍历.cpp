/* ************************************************************************
> File Name:     binaryTree-层序遍历.cpp
> Author:        xdp
> 微信公众号:    861529206@qq.com
> Created Time:  2022年01月03日 星期一 17时19分20秒
> Description:   
 ************************************************************************/

#include <queue>
#include "./treenode.h"
class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        queue<TreeNode*> que;
        if(root!=NULL) que.push(root);
        vector<vector<int>> result;
        while(!que.empty())
        {
            int size=que.size();
            vector<int> vec;
            //重点在于这个size
            for(int i=0;i<size;i++)
            {
                TreeNode* node=que.front();
                que.pop();
                vec.push_back(node->val);
                if(node->left)que.push(node->left);
                if(node->right)que.push(node->right);
            }
            result.push_back(vec);
        }
        return result;
    }

};
