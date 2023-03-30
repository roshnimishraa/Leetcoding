/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
//       for last node delete
        if(node ->next == NULL) delete node;
        
        ListNode* temp = node->next;
        swap(node->val,node->next->val);
        
        node->next = temp ->next;
        delete temp;
    }
};