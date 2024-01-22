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
    ListNode* removeElements(ListNode* head, int val) {
       //ListNode* temp=head;
       if(head==NULL)
       {
           return NULL;
       }
       if(head->val==val)
       {
           head=head->next;
       }
       ListNode* prev=new ListNode(0);
       prev->next=head;
       ListNode* temp=prev;
       while(temp->next!=NULL)
       {
           if(temp->next->val==val)
           {
               temp->next=temp->next->next;
           }
           else
           {
               temp=temp->next;
           }
       }
       return prev->next;
      // return 0;
    }
};