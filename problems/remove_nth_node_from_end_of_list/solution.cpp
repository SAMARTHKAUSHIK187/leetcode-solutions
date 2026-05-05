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
        if(head == NULL) return head;
        ListNode* tail = head;
        int size = 1;
        while(tail->next != NULL){
            size++;
            tail = tail->next;
        }

        if(size == 1 && n == 1) return NULL;
        else if(size == 1) return head;

        if(n == size){
            ListNode* temp = head;
            temp = head->next;
            head->next = NULL;
            delete head;
            return temp;
        }

        

        ListNode* curr = head;
        ListNode* prev = NULL;
        int target = size + 1 - n;
        int cnt = 1;
        while(cnt != target){
            cnt++;
            prev = curr;
            curr = curr->next;
        }

        if(n == 1 || target == size){
            prev->next = NULL;
            delete curr;
            return head;
        }
        
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

        return head;
    }
};