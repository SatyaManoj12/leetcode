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
    ListNode* removeZeroSumSublists(ListNode* head) {
        if (head->next == NULL) {
            if (head->val == 0)
                return NULL;
            else
                return head;
        }
        ListNode* A = new ListNode(2004);
        ListNode* S = A;
        ListNode* i = head;
        ListNode* j = i->next;
        while (i->next != NULL) {
            int sum = i->val;
            int c = 0;
            if (i->val == 0) {
                i = i->next;
                j = i->next;
            } else {
                while (j != NULL) {
                    sum += j->val;
                    if (sum == 0) {
                        if (sum == 0 and j->next == NULL)
                            return S->next;
                        i = j->next;
                        j = i->next;
                        c = 1;
                        break;
                    } else {
                        j = j->next;
                    }
                }
                if (c == 0) {
                    ListNode* nn = new ListNode(i->val);
                    A->next = nn;
                    A = A->next;
                    i = i->next;
                    j = i->next;
                }
            }
        }
        if (i->val != 0) {
            ListNode* nn = new ListNode(i->val);
            A->next = nn;
        }
        return S->next;
            
    }
};