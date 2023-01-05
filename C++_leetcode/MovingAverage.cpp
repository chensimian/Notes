#include<iostream>
#include<queue>
using namespace std;
class MovingAverage {
private:
    int size;
    double sum;
    queue<int> q;
public:
    MovingAverage(int size) {
        //初始化
        this->size=size;
        this->sum=0.0;
    }
    
    double next(int val) {
        //size()满的情况
        if (q.size()==size)
        {
            sum-=q.front();
            q.pop();
        }
        //入队
        q.emplace(val);
        sum+=val;
        //返回平均
        return sum/q.size();
    }
};