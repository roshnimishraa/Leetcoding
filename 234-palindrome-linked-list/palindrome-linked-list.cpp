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
    ListNode* findMiddle(ListNode* head)
    {
    ListNode* fast = head;
    ListNode* slow = head;
 while(fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
    }
ListNode* findReverse(ListNode* head)
{
ListNode* temp = head;
ListNode* front =NULL;
ListNode* prev = NULL;
while(temp!=NULL)
{
    front = temp->next;
    temp->next = prev;
    prev = temp;
    temp = front;
}
return prev;
}
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return true;
        }
     ListNode* mid = findMiddle(head);   
     ListNode* newHead = findReverse(mid->next);
ListNode* first = head;
ListNode* second = newHead;
while(second != NULL)
{
    // match 
    if(first->val != second->val)
    {
// reverse second half to get original position
findReverse(newHead);
return false;
    }
    first = first->next;
    second = second->next;
}
    // Reverse the second half
    // back to its original state
findReverse(newHead);
return true;
    }
};