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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        int c = 0;
        if (list1 == nullptr) {
            return list2;
        }
       while(c<a-1)
       {
        temp=temp->next;
        c++;
       }
       ListNode* st=temp;
       while(c<b+1)
       {
        temp=temp->next;
        c++;
       }
       ListNode* end=temp;
       ListNode* sh=list2;
       ListNode* sta=list2;
       while(sta->next!=nullptr)
       {
        sta=sta->next;
       // st->next=sh;
       }
       st->next=list2;
       sta->next=end;
       return list1;
    }
};