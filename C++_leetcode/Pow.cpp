//x^n = x^n/2 * x^n/2  = x^2*(n/2)
#include<vector>
#include<iostream>
using namespace std;
//用分治的做法比较好理解
class Solution {
public:
    double  dfs(double x, long long n){
        if(n==0) return 1.0;
        double y = dfs(x,n/2);
        return n%2==1 ? y*y*x : y*y;
    }
    double myPow(double x, int n) {
        long long N = n;
        return N>=0 ? dfs(x,N) : 1.0/dfs(x,-N);
    }
};