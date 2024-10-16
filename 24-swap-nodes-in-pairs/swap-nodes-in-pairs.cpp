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
    ListNode* swapPairs(ListNode* head) {
        
        if(head == NULL || head->next == NULL) return head;
        
        ListNode *first,*second,*newHead;
    first = head;
    second = head->next;
    newHead = swapPairs(head->next->next);
    
    //swap the nodes
    second ->next = first;
    first -> next = newHead;
    return second;
    }
};