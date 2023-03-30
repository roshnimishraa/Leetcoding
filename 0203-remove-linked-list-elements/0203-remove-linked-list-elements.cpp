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

ListNode* removeElements(ListNode* head, int val) {
    
    while(head != NULL && head -> val == val)    // eg [7, 7, 7, 5] val = 7, then we have to delete all 7 and move head to 5.
    {
        head = head -> next;
    }
    
    if(head == NULL)            // eg [7, 7, 7, 7] val = 7, then we have to delete all 7 and return NULL.
        return head;
    
    ListNode* curr = head;
    
    while(curr -> next != NULL)
    {
        if(curr -> next -> val == val)
        {
            curr -> next = curr -> next -> next;
        }
        else  
        {
            curr = curr -> next;
        }
    }
    
    return head;
}
};