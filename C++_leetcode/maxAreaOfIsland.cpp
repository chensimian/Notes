#include<iostream>
#include<vector>
using namespace std;
// 0-海洋格子  1-陆地格子  2-陆地格子未遍历过
class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        //遍历
        int res = 0;
        for (int r = 0; r < grid.size(); r++)
        {
            for(int c = 0; c < grid[0].size(); c++){
                //是陆地
                if(grid[r][c] == 1){
                    //面积
                    int a = area(grid,r,c);
                    res = max(res,a);
                }
            }
        }
        return res;
    
    }
    //计算面积
    int area(vector<vector<int>>& grid,int r, int c){
        //是否越界
        if(!inArea(grid,r,c)) return 0;
        //是否是陆地
        if(grid[r][c]!=1) return 0;
        //标记访问
        grid[r][c]=2;
        //上下左右计算面积
        return 1
            + area(grid,r-1,c)
            + area(grid,r+1,c)
            + area(grid,r,c-1)
            + area(grid,r,c+1);
    }
    //判断越界
    bool inArea(vector<vector<int>>& grid,int r, int c){
        return 0 <= r && r < grid.size() && 0 <= c && grid[0].size();
    }
};