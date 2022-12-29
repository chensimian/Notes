#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> weights;
    Solution(vector<int>& w) {
        //前缀和
        weights.push_back(w[0]);
        for(int i=1;i<w.size();i++){
            weights.push_back(w[i]+weights.back());
        }
    }
    
    int pickIndex() {
        //随机
        int rnd = rand()%weights.back();
        //二分 返回最接近前缀的那一个
        int left=0;
        int right=weights.size()-1;
        while (left<right)
        {
            int mid=(left+right)/2;
            if(rnd<weights[mid]){
                right=mid;
            }else{
                left=mid+1;
            }
        }
        return left;
    }
};
