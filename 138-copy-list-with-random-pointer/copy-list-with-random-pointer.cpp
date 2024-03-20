/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    private:
void insertCopyInBetween(Node* head)
{
    Node* temp =head;
while(temp!=NULL)
{
    Node* copyNode = new Node(temp->val);
    copyNode->next= temp->next;
    temp->next = copyNode;
    temp = temp->next->next;
}
}

void connectRandomPointers(Node* head)
{
Node* temp =head;
while(temp!=NULL)
{
Node* copyNode = temp->next;
    if(temp->random!=NULL)
    {
copyNode->random = temp->random->next;
    }
    else{
copyNode->random = NULL;
    }
    temp = temp->next->next;
}
}
Node* getDeepCopyList(Node* head)
{
Node* dummyNode = new Node(-1);
Node* res = dummyNode;
Node* temp =head;
while(temp!=NULL)
{
    // creating new list 
res->next = temp->next;
res=res->next;
// disconnecting and going back to initial 
// state of LL
temp->next = temp->next->next;
temp = temp->next;
}
return dummyNode->next;
}
public:
    Node* copyRandomList(Node* head) 
{
       // insert copy nodes in between 
insertCopyInBetween(head);
//  Connecting the Random Pointer
connectRandomPointers(head);
// connecting next pointer
return getDeepCopyList(head);
    }
};