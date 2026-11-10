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
    bool hasCycle(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return false;
        ListNode* p = nullptr;
        ListNode* q = nullptr;
        p = q = head;
        do
        {
            p = p->next;
            q = q->next;
            q = q?q->next:q;
        } while (p && q && p != q);
        if (p == q)
            return true;
        else
            return false;
    }
};
