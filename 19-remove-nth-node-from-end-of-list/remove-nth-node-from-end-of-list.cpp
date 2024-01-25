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
        ListNode* temp=head;
       if (head == NULL || (head->next == NULL && n == 1)) {
                                  delete head;  // Free the memory of the only node
                           return NULL;  // Return NULL as the new head
        }
        while(temp)
        {
            c++;
            temp=temp->next;
        }
        temp=head;
        int diff=abs(c-n);
        //ListNode* h=head;
        if(c==n)
        {
            return head->next;
        }
        int cn=0;
        while(temp)
        {
            cn++;
            if(diff==cn)
            {
                temp->next=temp->next->next;
            }
            temp=temp->next;
        }
        return head;
        
    }
};