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
//         for last node
        if(node->next == NULL) 
            delete node;
        
//         swap values (deleteNodeValue , deleteNodeValue->next)
        swap(node->val,node->next->val);
    
 ListNode *nodeToBeDeleted =node->next;
//       deleting node
        node->next = nodeToBeDeleted->next;
        delete nodeToBeDeleted;
        }
};