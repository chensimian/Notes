#include<iostream>
#include<vector>
using namespace std;
//二分查找返回下标
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }else if(nums[mid] < target){
                left = left+1;
            }else{
                right = right-1;
            }
        }
        return -1;
    }
};