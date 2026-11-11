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
    
    void swap (ListNode* curr, ListNode* prev){
        if(curr == nullptr || curr->next == nullptr){
            return;
        }

        ListNode* adjnode = curr->next;
        ListNode* nextnode = curr->next->next;

        curr->next = nextnode;
        adjnode->next = curr;
        prev->next = adjnode;

        swap(nextnode, curr);

    }
    
    
    ListNode* swapPairs(ListNode* head) {
        ListNode* curr = head;
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        swap(curr, prev);
        return dummy.next;
    }
};