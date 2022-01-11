/* ************************************************************************
> File Name:     977.有序数组的平方.cpp
> Author:        xdp
> 微信公众号:    861529206@qq.com
> Created Time:  2022年01月03日 星期一 13时06分20秒
> Description:   
 ************************************************************************/


#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> sortedSquares(vector<int>& A)
    {
        vector<int> r;
        int i=0,j=A.size()-1;
        while(i<=j)
        {
           if(A[i]*A[i]>A[j]*A[j]) 
           {
               r.push_back(A[i]*A[i]);
               i++;
           }
           else if(A[i]*A[i]<A[j]*A[j])
           {
               r.push_back(A[j]*A[j]);
               j--;
           }
           else
           {
                r.push_back(A[i]*A[i]);
                i++;
                j--;
           }
        }
        reverse(r.begin(),r.end());
        return r;
    }
};

int main()
{
    vector<int> example={
        -4,-2-1,0,1,3,4,7
    };

    Solution s;
    auto r=s.sortedSquares(example);
    cout<<"result is "<<'\t';
    for(const auto& i:r)
    {
        cout<<i<<'\t';
    }
    return 0;
}
