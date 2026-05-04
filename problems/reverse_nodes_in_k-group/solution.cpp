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
private:
    ListNode* getKthNode(ListNode* currHead, int k){
        ListNode* temp = currHead;
        k -= 1;
        while(temp != NULL && k > 0){
            k--;
            temp = temp->next;
        }

        return temp;
    }

ListNode* reverseLinkedList(ListNode* temp){
    ListNode* curr = temp;
    ListNode* prev = NULL;

    if(curr->next == NULL) return curr;

    while(curr != NULL){
        ListNode* fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }

    return prev;
}
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevLast = NULL;

        while(temp != NULL){
            ListNode* KthNode = getKthNode(temp, k);
            if(KthNode == NULL){
                if(prevLast){
                    prevLast->next = temp;
                    break;
                }
            }

            ListNode* nextNode = KthNode->next;
            KthNode->next = NULL;
            reverseLinkedList(temp);
            if(temp == head){
                head = KthNode;
            }else{
                prevLast->next = KthNode;
            }

            prevLast = temp;
            temp = nextNode;
        }

        return head;
    }
};