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
    ListNode *detectCycle(ListNode *head) {
 
        ListNode* slow =head;
ListNode* fast =head;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast=fast->next->next;
            
            if(fast == slow) {
                break;
            }
        }
        
//     No Cycle 
        if(fast == NULL || fast -> next == NULL) return NULL;
//    Loop Detected slow and fast meet 
        ListNode* ptr1=head;
        ListNode* ptr2 = slow;  
        
        while(ptr1 != ptr2)
        {
            ptr1=ptr1->next;
            ptr2 = ptr2->next;
        }
//         ptr1 & ptr2 meet
        return ptr1;
    }
};