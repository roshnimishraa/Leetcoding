/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
{
if(headA==NULL || headB==NULL)
 return NULL;

        ListNode* t1 = headA;
        ListNode* t2 =headB;
        int n1=0,n2=0;
// compute length of LL1 
while(t1!=NULL)
{
    n1++;
    t1 = t1->next;
}
// compute length of LL2
while(t2!=NULL)
{
    n2++;
    t2 = t2->next;
}
if(n2>n1)
{
   while(n2>n1)
   {
    headB = headB->next;
    n2--;
   }
}
else if(n1>n2){
    while(n1>n2)
    {
        headA = headA->next;
        n1--;
    }
}
while(headA!=NULL && headB!=NULL)
{
    if(headA==headB) return headA;
    headA = headA->next;
    headB = headB->next;
}
return NULL;
    }
};