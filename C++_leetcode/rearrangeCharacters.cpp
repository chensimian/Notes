#include<vector>
#include<iostream>
#include<unordered_map>
using namespace std;
//计数
class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int> cnt1,cnt2;
        for (char c : s)
        {
            cnt1[c-'a']++;
        }
        for(char c : target){
            cnt2[c-'a']++;
        }
        int ans=INT_MAX;
        for (int i = 0; i < 26; i++)
        {
            if (cnt2[i])
            {
                ans=min(ans,cnt1[i]/cnt2[i]);
            }            
        }
        return ans;
    }
};