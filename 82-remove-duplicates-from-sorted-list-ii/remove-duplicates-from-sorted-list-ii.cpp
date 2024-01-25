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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        int cnt=0;
        ListNode* nl=new ListNode(-1);
        ListNode* c=nl;
        while(temp!=NULL and temp->next != NULL )
        {
            if(temp->val!=temp->next->val)
            {
                c->next=new ListNode(temp->val);
                c=c->next;
            }
            else
            {
                while (temp->next!=NULL and temp->val == temp->next->val) 
                {

                    ListNode* td=new ListNode(temp->val);
                    temp=temp->next;
                    delete td;
                }
            }
            temp=temp->next;
        }
        while(temp!=NULL){
            c->next=new ListNode(temp->val);
            c=c->next;
            temp=temp->next;
        }    
        return nl->next; 
    }
};