/* ************************************************************************
> File Name:     treenode.h
> Author:        xdp
> 微信公众号:    861529206@qq.com
> Created Time:  2022年01月03日 星期一 16时49分54秒
> Description:   
 ************************************************************************/

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};
