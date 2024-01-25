/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head;
        ListNode* cur=head->next;
        int s=0;
         ListNode* nl=new ListNode(-1);
         ListNode* c=nl;
        while(cur)
        {
            if(cur->val !=0)
            {
                s+=cur->val;
               // cur = cur -> next;
            }
            else if (cur -> val ==0) {
                    c->next=new ListNode(s);
                     c=c->next;
                     s=0;
                    temp=cur->next;
            }
            cur=cur->next;
        }
        return  nl->next;
    }
};