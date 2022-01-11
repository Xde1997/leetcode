/* ************************************************************************
> File Name:     27.移除元素-快慢指针.cpp
> Author:        xdp
> 微信公众号:    861529206@qq.com
> Created Time:  2022年01月03日 星期一 08时44分55秒
> Description:   
 ************************************************************************/

#include <vector>
#include <cassert>
#include <iostream>
#include <type_traits>
using namespace std;
class Solution
{
public:
    int removeElement(vector<int> nums,int val)
    {
       int slowIndex=0;
       for(int fastIndex=0;fastIndex<nums.size();fastIndex++)
       {
           if(val!=nums[fastIndex])
           {
               nums[slowIndex++]=nums[fastIndex];
           }
       }
       return slowIndex;
    }
};

int main()
{
    vector<int> nums={
        1,2,3,4,5,6,3,3,3,3,3
    };
    Solution s;
    int size=s.removeElement(nums,3);
    assert(size==5);
    cout<<"size is "<<size<<endl;
    return 0;
}
