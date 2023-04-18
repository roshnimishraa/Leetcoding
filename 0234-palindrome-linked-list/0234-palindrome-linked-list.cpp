class Solution
{
    public:
        ListNode* findMiddle(ListNode *head)
        {
            ListNode *slow = head;
            ListNode *fast = head->next;
            while (fast && fast->next)
            {
                fast = fast->next->next;
                slow = slow->next;
            }
            return slow;
        }
    ListNode* reverse(ListNode *head)
    {
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *forward = NULL;

        while (curr)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    bool isPalindrome(ListNode *head)
    {
        if (head->next == NULL)
            return true;

        ListNode *middle = findMiddle(head);

        middle->next = reverse(middle->next);

        ListNode *temp1 = head;
        ListNode *temp2 = middle->next;
        while (temp2)
        {
            if (temp1->val != temp2->val)
                return false;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return true;
    }
};