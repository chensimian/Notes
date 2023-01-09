#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    //求1所在环的长度即可
    int reinitializePermutation(int n) {
        int i=1,step=1;
        while (true)
        {
            i=i%2==1?(n-1+i)/2:i/2;
            if(i==1) return step;
            step++;
        }
        
    }
};