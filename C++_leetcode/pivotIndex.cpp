#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
//前缀和
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = accumulate(nums.begin(),nums.end(),0);
        //左边和
        int lsum=0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(2*lsum+nums[i]==total) return i;
            lsum+=nums[i];
        }
        return -1;
    }
};