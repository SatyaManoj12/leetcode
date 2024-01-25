/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempa=headA;
        ListNode* tempb=headB;
        int ca=0,cb=0;
        while(tempa){ca++;tempa=tempa->next;}
        while(tempb){cb++;tempb=tempb->next;}
        int x=abs(ca-cb);
        tempa = headA;
        tempb = headB;
        if(ca>cb)
        {
            while(x>0)
            {
                tempa=tempa->next;
                x--;
            }
        }
        else
        {
            while(x--)
            {
                tempb=tempb->next;
            }
        }
        while(tempa && tempb)
        {
            if(tempa==tempb)
            {
                return tempb;
            }
            tempa=tempa->next;
            tempb=tempb->next;
        }
        return 0;
    }
};