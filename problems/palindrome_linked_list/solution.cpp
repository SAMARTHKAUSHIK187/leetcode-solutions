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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        
        vector<int> v;
        int pos = 0;
        while(temp != NULL){
            v.push_back(temp->val);
            pos++;
            temp = temp->next;
        }
        temp = head;
        int i = 0;
        while(temp != NULL && (i < (pos - 1))){
            if(v[i] != v[pos - 1 - i]) return false;
            i++;
            temp = temp->next;
        }

        return true;
    }
};