#include<vector>
#include<iostream>
#include<unordered_map>
using namespace std;
//节点数据结构
typedef struct node
{
    int val;
    struct node* next;
}ListNode;
//迭代反转数据结构
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        //三个指针进行就地反转
        ListNode* pre = nullptr;
        ListNode* curr = head;
        while (curr)
        {
            ListNode* next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }
        return pre;
    }
};