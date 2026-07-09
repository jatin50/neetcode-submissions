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
    ListNode* rec(ListNode* head, int& n) {
        if (!head) {
            return NULL;
        }

        head -> next = rec(head -> next, n);
        n--;
        if (n == 0) {
            return head -> next;
        }
        return head;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        return rec(head, n);
    }
};
