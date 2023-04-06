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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL){
            return NULL;
        }
        
        //base condition
        //to not reverse the last group which is less than k
        ListNode* temp=head;
        for(int i=0;i<k;i++)
        {
            if(temp==nullptr)
                return head;
            temp=temp->next;
        }
    
//         STEP1: Reverse first k group (My Work)
        ListNode* next = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;
        int count =0;
        
        while(curr != NULL && count<k){
        next = curr -> next;

//   direction change kro 
            curr->next = prev ;
            prev = curr;
            curr = next;
//         increase count till k
        count++;
        }
        
//     step2: Recursion work
        if(next != NULL){
//    Do reverse after head-> next elements         
            head -> next = reverseKGroup(next,k);
        }
//  step3: Return head of reversed list 
        return prev;
    }
};