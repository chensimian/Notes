#include<vector>
#include<iostream>
using namespace std;
//双指针
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1;
        while (l<r)
        {
            int sum=numbers[l]+numbers[r];
            if (sum==target)
            {
                return {l,r};
            }else if(sum<target){
                l++;
            }else{
                r--;
            }
        }
        return {-1,-1};
    }
};