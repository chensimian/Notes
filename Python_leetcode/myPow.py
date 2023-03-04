class Solution(object):
    def myPow(self, x, n):
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        #判断
        if n == 0:
            return 1
        if n == 1:
            return x
        if n == 2:
            return x*x
        #偶数跟奇数 奇数的是-1 后再乘1
        return self.myPow(x*x,n//2) if n%2 == 0 else x*self.myPow(x,n-1)