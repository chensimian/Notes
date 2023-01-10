#include<cctype>
#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string sgood;
        //小写符号放进去
        for(char ch : s){
            //isalnum字母或数字
            if(isalnum(ch)){
                sgood+=tolower(ch);
            }
        }
        //反转
        string rev_sgood(sgood.rbegin(),sgood.rend());
        return sgood==rev_sgood;
    }
};