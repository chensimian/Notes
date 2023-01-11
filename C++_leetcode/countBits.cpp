#include<iostream>
#include<vector>
using namespace std;
//位运算
class Solution {
public:
    vector<int> countBits(int n) {
        //从小遍历到大
        vector<int> ans(n+1,0);
        for (int i = 1; i <= n; i++)
        {
            ans[i]=ans[i>>1]+(i&1);
        }
        return ans;
    }
};