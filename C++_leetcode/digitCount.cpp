#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool digitCount(string num) {
        //建立一个数组存储次数 0-9 十个数
        vector<int> count(10,0);
        for (char c : num)
        {
            count[c-'0']++;
        }
        //次数是否等于当前的位数
        for (int i = 0; i < num.length(); i++)
        {
            if(count[i]!=num[i]-'0') return false;
        }
        return true;
    }
};