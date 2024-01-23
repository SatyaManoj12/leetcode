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
ListNode* reverse(ListNode* head)
{
    ListNode* next=NULL,*prev=NULL,*cur=head;
    while(cur!=NULL)
    {
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    return prev;
}
    bool isPalindrome(ListNode* head) {
        int c=0;
        ListNode* temp=head;
        while(temp)
        {
            c++;
            temp=temp->next;
        }
        temp=head;
        for(int i=1;i<c/2;i++)
        {
            temp=temp->next;
        }
        ListNode* nn=temp->next;
        temp->next=NULL;
        temp=head;
        ListNode* rev=reverse(nn);
        while(temp and rev)
        {
            if(temp->val==rev->val)
            {
                temp=temp->next;
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