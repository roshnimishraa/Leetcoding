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
        
//     base case 
        if(head == NULL){
            return head;
        }
//     recursion work 
     head->next= removeElements(head->next,val);
    // my work
        if(head->val == val){
          return head->next;
        }
        else{
return head;
        }
    }
};