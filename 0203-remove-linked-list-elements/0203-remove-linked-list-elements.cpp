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
      if(head == NULL) return NULL;
        
//     Recursion work 
        head -> next = removeElements(head->next,val);
        
//         my work
        // head == val
        if(head -> val == val){
ListNode* ans = head->next ;
            delete head;
            return ans;
        }
        else{
            return head;
        }
    }
};