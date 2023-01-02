#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        //哈希计数
        if(s.size()!=t.size() || s==t) return false;
        vector<int> cnt(26,0);
        for(char c:s){
            ++cnt[c-'a'];
        }
        for(char c:t){
            --cnt[c-'a'];
            if(cnt[c-'a']<0) return false;
        }
        return true;
    }
};