/* ************************************************************************
> File Name:     jianzhioffer5.替换空格.cpp
> Author:        xdp
> 微信公众号:    861529206@qq.com
> Created Time:  2022年01月03日 星期一 12时37分40秒
> Description:   
 ************************************************************************/

#include <string>
#include <iostream>
using namespace std;
class Solution
{
public:
    string replaceSpace(string s)
    {
        int count=0;
        int sOldSize=s.size();

        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                count++;
            }
        }

        s.resize(s.size()+count*2);
        int sNewSize=s.size();
        for(int i=sNewSize-1,j=sOldSize-1;j<i;i--,j--)
        {
            if(s[j]!=' ')
            {
                s[i]=s[j];
            }
            else
            {
                s[i]='0';
                s[i-1]='2';
                s[i-2]='%';
                i-=2;
            }
        }
        return s;
    }
};

int main()
{
    string example="we are family!";
    Solution s;
    cout<<"string become "<<s.replaceSpace(example)<<endl;
    return 0;
}
