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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next==NULL) 
            return head;
    
        ListNode* rest_head = reverseList(head->next);
        ListNode* rest_tail = head->next;
    
//         change arrow 
        rest_tail -> next = head;
        head -> next = NULL;
        
//     New head
        return rest_head;
    }
};