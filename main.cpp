//剑指第14题
//输入一个链表，输出该链表中倒数第k个结点。


#include <iostream>

using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        int len=0,Kzheng=0;
        ListNode* pListHead1=pListHead;
        while(pListHead1!=nullptr){
            len++;
            pListHead1=pListHead1->next;
        }
        if(len==0)
            return NULL;
        else if (k>len)
            return NULL;
        else{
            Kzheng=len-k;
            ListNode* pListHead2=pListHead;
            for(int i=1;i<=Kzheng;i++){
                pListHead2=pListHead2->next;
            }
            return pListHead2;
        }
    }
};

//调试成功！这是自己完成的第一道链表类的相关题目！