/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode() : val(0), next(nullptr) {}
 * ListNode(int x) : val(x), next(nullptr) {}
 * ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        bool isCarry = false;
        if (head->val >= 5) {
            ListNode* newHead = new ListNode(1);
            newHead->next = head;
            head = newHead;
            isCarry = true;
        }

        ListNode* curr = head;
        if(isCarry) curr = curr->next;
        while (curr != nullptr) {
            curr->val = (curr->val * 2) % 10;
            if (curr->next != nullptr && curr->next->val >= 5) {
                curr->val += 1;
            }
            curr = curr->next;
        }

        return head;
    }
};