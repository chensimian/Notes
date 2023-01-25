#include<vector>
#include<iostream>
using namespace std;
//不能用* 、 \ 、%
class Solution {
public:
    ////最简单的做法就是用减法来代替  这种做法超出了时间复杂度
    // int divide(int a, int b) {
    //     //32位的最大值2^31-1  2147483647
    //     //32位的最小值-2^31  12147483648 转成最大值会越界 
    //     //-2147483648/(-1)越界  返回最大值
    //     if(a==INT_MIN && b==-1) return INT_MAX;
    //     //判断符号 异或不同为1
    //     int sign = (a>0) ^ (b>0) ? -1 : 1;
    //     //转成负数
    //     if(a>0) a=-a;
    //     if(b>0) b=-b;
    //     int ans=0;
    //     while (a<=b)
    //     {
    //         a-=b;
    //         ans++;
    //     }
    //     return sign==1?ans:-ans;
    // }

    int divide(int a, int b) {

    }
};