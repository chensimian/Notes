#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//最大整数
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        //对字符数组进行排序
        vector<string> str;
        for (auto& x : nums)
        {
            str.push_back(to_string(x));
        }
        sort(str.begin(),str.end(),[](const auto& a, const auto&b) {return a+b>b+a;});
        //结果
        string ans;
        for(auto& x :str){
            ans+=x;
        }
        return ans[0]=='0'?"0" : ans;
    }
};