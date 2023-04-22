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
        if(head == NULL) {
            return head;
        }
//     Recursion head->next your work to remove occurence of 
//         nodeToDelete
        head->next = removeElements(head->next,val);
        
//     my word
        if(head->val == val){
            return head->next;
        }
        else{
            return head;
        }
    }
};