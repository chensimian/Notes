#include<iostream>
using namespace std;
//双指针
class Solution {
public:
    bool check_validPalindrome(string&s,int l,int r){
        while (l<r)
        {
           if (s[l]!=s[r])
           {
             return false;
           }
            l++,r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l=0,r=s.size()-1;
        while (l<r)
        {
           //获取两个字符
           char c1=s[l],c2=s[r];
           if (c1==c2)
           {
            l++;
            r--;
           }else{
            //抽出另外一个函数进行判断 移除一个
            return check_validPalindrome(s,l+1,r) || check_validPalindrome(s,l,r-1);
           }
        }
        return true;  
    }
};