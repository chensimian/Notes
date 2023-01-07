#include<vector>
#include<iostream>
using namespace std;
int pickIndex(vector<int>& w){
    //前缀和
    vector<int> weights;
    weights.push_back(w[0]);
    for (int i = 1; i < w.size(); i++)
    {
        weights.push_back(w[i]+weights.back());
    }
    //随机数及二分
    int rnd = rand()%weights.back();
    int left=0;
    int right=weights.size()-1;
    while (left<right)
    {
        int mid=(left+right)/2;
        if (rnd<weights[mid])
        {
            right=mid;
        }else{
            left=mid+1;
        }
    }
    return left;
}