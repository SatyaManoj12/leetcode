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
    int gcd(int a,int b)
    {
        if(b==0) return a;
        else
        {
            return gcd(b,a%b);
        }
    }
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head;
        while(temp!=NULL and temp->next!=NULL)
        {
            int x=gcd(temp->val,temp->next->val);
            ListNode* dum=new ListNode(x);
            dum->next=temp->next;
            temp->next=dum;
            temp=temp->next->next;
        }
        return head;
        
    }
};