#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    //dfs(target,combine,idx) 表示当前在 candidates数组的第idx位
    void dfs(vector<int>& candidates, int target, int idx, vector<vector<int>>& res, vector<int>& combine){
        //递归结束条件
        if(target==0){
            res.push_back(combine);
            return ;
        }
        for (int i = idx; i < candidates.size(); i++)
        {
            //剪枝
            if(target-candidates[i]<0) break;
            combine.push_back(candidates[i]);
            //回溯
            dfs(candidates,target-candidates[i],i,res,combine);
            //撤销结果
            combine.pop_back();
        }
        
    }
    //递归回溯剪枝
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;//结果
        if(candidates.size()==0) return res;
        vector<int> combine;//已经组合的列表
        sort(candidates.begin(),candidates.end());
        dfs(candidates,target,0,res,combine);
        return res;
    }
};