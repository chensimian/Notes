#include<iostream>
#include<string>
using namespace std;
//1750. 删除字符串两端相同字符后的最短长度
//思路：双指针
class Solution {
public:
    int minimumLength(string s) {
        //头尾两个指针
        int l=0,r=s.length()-1;
        while (l<r && s[l]==s[r])
        {
            char c=s[l];
            //跳过相同的
            while(l<=r && s[l]==c) l++;
            while(l<=r && s[r]==c) r--;
        }
        return r-l+1;
    }
};
int main(void){
    string s="cabaabac";
    Solution solution;
    int result = solution.minimumLength(s);
    cout<<result<<endl;
    return 0;
}