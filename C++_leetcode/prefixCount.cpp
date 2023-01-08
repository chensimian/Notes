#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        //结果
        int ans=0;
        //遍历
        for(auto &w:words){
            ans+=w.find(pref)==0;
        }
        return ans;
    }
};