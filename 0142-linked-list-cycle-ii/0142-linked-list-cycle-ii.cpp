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
        ListNode* fast = head;
        while(fast!=NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            
//             Cycle Detected
// Corner Case: First Meeting is head
            if(slow == fast)
            {
                ListNode* temp =head;
                while(slow !=temp){
                      temp = temp -> next;
                    slow=slow->next;
                    
                }
                return temp;
            }    
        }
        return NULL;
    }
};