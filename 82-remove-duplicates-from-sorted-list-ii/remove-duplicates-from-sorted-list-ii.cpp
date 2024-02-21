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
    ListNode* deleteDuplicates(ListNode* head) {
   if(head == NULL || head->next==NULL) 
   return head;

ListNode *dummy = new ListNode(-1);
ListNode *itr = dummy;
// Potential unique nod -> itr->next
itr->next = head;
ListNode *curr = head->next;
while(curr!=NULL)
{
// remove continuous duplicate nodes
bool isLoopRun = false;
while(curr != NULL && itr->next->val == curr->val)
{
    isLoopRun = true;
    curr = curr->next;
}
if(isLoopRun == true)
    itr->next = curr; //next potential unique node

else 
    itr = itr->next;
// to avoid null point exception 
if(curr != NULL) curr = curr->next;
}
return dummy->next;
    }
};