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
ListNode*  reverse(ListNode* head)
 {
     ListNode* rev=NULL,*next=NULL,*cur=head;
     while(cur!=NULL)
     {
         next=cur->next;
         cur->next=rev;
         rev=cur;
         cur=next;
     }
     return rev;

 }
    bool isPalindrome(ListNode* head) {
    ListNode* tem = head;
    int c=0;
    while(tem)
    {
        c++;
        tem=tem->next;
    }
    tem=head;
    for(int i=1;i<c/2;i++)
    {
        tem=tem->next;
    }
    ListNode *nn=tem->next;
    tem->next=NULL;
    tem=head;
    ListNode* rev=reverse(nn);
    int flag=false;
    while(tem && rev)
    {
        // cout << head->val << " " << rev->val << endl;
        if(tem->val==rev->val)
        {
            tem=tem->next;
            rev=rev->next;
        }
        else
        {
           return false;
        }
    }
    return true;
    }
    
};