#include<set>
#include<iostream>
using namespace std;
class ExamRoom {
    //有序座位编号
    int n;
    //存储现有学生的座位编号
    set<int> s;
public:
    ExamRoom(int N) {
        n=N;
    }
    
    int seat() {
        //开始没有人
        if(s.empty()){
            s.insert(0);
            return 0;
        }
        int pos=0,pre=-1,maxDist=0;
        for(int cur:s){
            //最近距离dist为当前座位和之前座位差值/2
            int dist=(cur-pre)/2;
            //最近距离>最大距离
            if(dist>maxDist){
                pos=pre==-1?:0,pre+dist;
                maxDist=pre==-1?cur:dist;
            }
            pre=cur;
        }
        //末尾的位置
        if(n-pre-1>maxDist) pos=n-1;
        s.insert(pos);
        return pos;
    }
    
    void leave(int p) {
        s.erase(p);
    }
};