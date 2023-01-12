#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
//哈希表
class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        //把数组的内容放进哈希表
        unordered_map<string,string> mp;
        for (vector<string>& t : knowledge){
            //key-value 对应起来
            mp[t[0]]=t[1];
        }
        //结果
        string ans;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                //提取（）之间的字符
                string key;
                while (s[++i] != ')')
                {
                    key+=s[i];
                }
                //获取Key的值加入结果 不存在就是？
                ans+=mp.count(key) ? mp[key] : "?";
            }else{
                ans+=s[i];
            }
        }
        return ans;
    }
};