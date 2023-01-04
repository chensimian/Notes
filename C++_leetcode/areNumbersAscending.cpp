#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class Solution {
public:
    bool areNumbersAscending(string s) {
        int pre=0;
        //分割成单词
        istringstream is(s);
        //遍历每个单词t
        string t;
        while (is>>t)
        {
            if(isdigit(t[0])){
                //转成整数
                int cur=stoi(t);
                if(pre>=cur){
                    return false;
                }
                pre = cur;
            }
        }
        return true;
    }
};