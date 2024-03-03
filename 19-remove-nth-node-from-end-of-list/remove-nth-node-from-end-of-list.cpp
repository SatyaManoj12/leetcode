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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int c=0;
        if(head==NULL) return NULL;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        temp=head;
        int diff=abs(c-n);
        if(c==n) return head->next;
        int cnt=0;
        while(temp!=NULL)
        {
            cnt++;
            if(diff==cnt)
            {
            temp->next=temp->next->next;
            }
            temp=temp->next;
        }
         return head;
    }
};