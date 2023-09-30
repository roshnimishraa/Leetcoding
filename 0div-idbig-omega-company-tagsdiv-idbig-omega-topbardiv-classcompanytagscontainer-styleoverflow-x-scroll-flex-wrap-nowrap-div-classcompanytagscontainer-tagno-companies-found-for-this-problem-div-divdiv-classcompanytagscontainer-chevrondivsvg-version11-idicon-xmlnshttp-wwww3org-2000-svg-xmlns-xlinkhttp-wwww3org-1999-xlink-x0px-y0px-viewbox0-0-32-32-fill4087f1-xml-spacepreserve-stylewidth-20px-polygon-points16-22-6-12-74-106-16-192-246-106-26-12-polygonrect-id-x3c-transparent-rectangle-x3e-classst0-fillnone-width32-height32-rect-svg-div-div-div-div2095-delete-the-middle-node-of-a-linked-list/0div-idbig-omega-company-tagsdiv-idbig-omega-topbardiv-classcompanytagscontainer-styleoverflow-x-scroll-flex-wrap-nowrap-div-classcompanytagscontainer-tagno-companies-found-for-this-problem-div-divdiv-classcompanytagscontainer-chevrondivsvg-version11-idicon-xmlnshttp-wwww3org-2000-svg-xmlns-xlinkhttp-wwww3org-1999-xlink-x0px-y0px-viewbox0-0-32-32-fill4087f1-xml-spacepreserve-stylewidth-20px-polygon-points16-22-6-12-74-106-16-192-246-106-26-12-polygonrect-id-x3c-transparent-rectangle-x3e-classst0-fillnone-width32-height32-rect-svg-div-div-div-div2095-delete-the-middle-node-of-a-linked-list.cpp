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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast = head;
        ListNode *prev = NULL;
//         corner case 
    if(head == NULL || head->next == NULL) return NULL;
    while(fast != NULL and fast->next != NULL)
    {
        fast = fast->next->next;
        prev = slow;        
        slow = slow->next;      
    }
    //slow mid ko point kr rha h 
        prev -> next = prev->next->next;
        return head;
        
        }
};