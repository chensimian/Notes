#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class Solution {
public:
    int countEven(int num) {
        int res=0;
        for (int i = 1; i <=num; i++)
        {
            int x=i,sum=0;
            //对应位数相加
            while (x)
            {
                sum+=x%10;
                x/=10;
            }
            if (sum%2==0)
            {
                res++;
            }
        }
        return res;
    }
};