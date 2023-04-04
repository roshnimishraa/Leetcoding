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
    
//  either head is empty or there is only one node
  if(head == NULL || head->next == NULL){
      return head;
  }      
// rest_head is last node 
    ListNode* rest_head = reverseList(head -> next);
// head next for the purpose of change direction       
ListNode* rest_tail =head->next;
    
//        change arrow
        rest_tail -> next = head;
// mark first node next null because it is last node now
     head -> next = NULL;
        
//         NEW HEAD 
        return rest_head;
    }
};