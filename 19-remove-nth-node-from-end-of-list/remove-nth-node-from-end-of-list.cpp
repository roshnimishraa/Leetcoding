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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
 if(head == NULL) return NULL;

    // find len 
    int count = 0;
ListNode* temp = head;
while(temp!=NULL)
{
    count++;
    temp = temp->next;
}
if(count == n){
    ListNode* newHead = head->next;
    delete head;
    return newHead;
}
int res = count-n;
// iterate again 
temp = head;
while(temp != NULL)
{
    res--;
    if(res == 0) {
        break;
    }
temp = temp->next;
}
ListNode* delNode = temp->next;
temp->next = temp->next->next;
delete(delNode);
return head;
}
};