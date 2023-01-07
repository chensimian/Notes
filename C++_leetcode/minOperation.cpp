#include<vector>
#include<iostream>
#include<numeric>
using namespace std;
//滑动窗口
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);//第三个参数是累加的初始值
        //初始判断
        if(sum<x) return -1;
        int right=0;
        //左边和与右边和
        int lsum=0,rsum=sum;
        //结果设置成最大
        int ans=n+1;
        for(int left=-1;left<n;++left){
            //计算左边前缀和
            if(left!=-1) lsum+=nums[left];
            //左/右缀合大于x 滑动右
            while(right<n && lsum+rsum>x){
                rsum-=nums[right];
                ++right;
            }
            //前缀与后缀相等
            if(lsum+rsum==x){
                ans=min(ans,(left+1)+(n-right));
            }
        }
        return ans>n?-1:ans;
    }
};