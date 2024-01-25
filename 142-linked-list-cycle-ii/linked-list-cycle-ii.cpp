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
    ListNode *detectCycle(ListNode *head) {
        ListNode* f=head;
        ListNode* s=head;
        while(f!=NULL and f->next!=NULL)
        {
            f=f->next->next;
            s=s->next;
            if(f==s)
            {
                break;
            }
        }
        if(f==NULL or f->next==NULL)
        {
            return NULL;
        }
        ListNode* temp=s;
        ListNode* h=head;
        //int cnt=0;
        while(temp )
        {
            if(temp==h)
            {
                return temp;
            }
            temp=temp->next;
               h=h->next;
        }
        return nullptr;
    }
};