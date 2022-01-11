/* ************************************************************************
> File Name:     27.移除元素.cpp
> Author:        xdp
> 微信公众号:    861529206@qq.com
> Created Time:  2022年01月03日 星期一 08时17分31秒
> Description:   
 ************************************************************************/
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    public:
        int removeElement(vector<int> &nums,int val)
        {
            int size=nums.size();
            for(int i=0;i<size;i++)
            {
                if(nums[i]==val)
                {
                    for(int j=i+1;j<size;j++)
                    {
                        nums[j-1]=nums[j];
                    }
                    i--;
                    size--;
                }
            }
            return size;
        }
};

int main()
{
    vector<int> example={
        1,2,3,4,5,3,4,3,3,3,3,6,3
    };
    Solution s;
    int size=s.removeElement(example,3);
    cout<<"size is "<<size<<endl;
    return 0;
}
