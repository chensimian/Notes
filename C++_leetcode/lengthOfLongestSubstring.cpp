#include<vector>
#include<iostream>
#include<unordered_set>
using namespace std;
//滑动窗口
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //记录每个字符是否出现过
        unordered_set<char> occ;
        //右指针
        int r=-1,ans=0;
        //遍历左指针
        for(int i=0;i<s.size();i++){
            if(i!=0){
                //移除
                occ.erase(s[i-1]);
            }
            //不断移动右指针，不同则加入
            while (r+1<s.size() && occ.count(s[r+1]))
            {
                occ.insert(s[r+1]);
                r++;
            }
            ans=max(ans,r-i+1);           
        }
        return ans;
    }
};