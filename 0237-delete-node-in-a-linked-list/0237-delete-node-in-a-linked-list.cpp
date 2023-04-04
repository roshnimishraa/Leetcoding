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
//       Delete node is last node
        if(node -> next == NULL){
            delete node;
        }
        
//     swapping node and node->next
        swap(node->val,node->next->val);
    
        ListNode* nodeToDelete = node->next;
//         unlinking with nodeToDelete 
        node->next = nodeToDelete->next;
//     delete nodeToDelete
        delete nodeToDelete;
    }
};