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
    ListNode* oddEvenList(ListNode* head) {
        //corner case 
    if(head == NULL || head->next == NULL || head->next->next == NULL)
    {
        return head;
        
    }
    ListNode *oddPointer =head;
     ListNode *evenPointer = head->next;
    ListNode *startOfEven =head->next;
    
    while(oddPointer->next != NULL && evenPointer->next != NULL)
    {
     oddPointer -> next = evenPointer ->next;
        evenPointer -> next = oddPointer->next->next;
        
    oddPointer = oddPointer->next;
        evenPointer = evenPointer->next;
        
    }
        
// connect the even pointer to the odd pointer 
        oddPointer->next = startOfEven;
        
        return head;
    }
};