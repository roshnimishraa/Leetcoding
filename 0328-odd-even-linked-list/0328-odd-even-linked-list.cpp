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
     oddPointer -> next = evenPointer ->next;   //Connect all odds
        evenPointer -> next = oddPointer->next->next;   //Connect all evens
        
    oddPointer = oddPointer->next;
        evenPointer = evenPointer->next;
        
    }
        
// connect the even pointer to the odd pointer 
          oddPointer->next = startOfEven;
//Place the first even node after the last odd node.
        
        return head;
    }
};