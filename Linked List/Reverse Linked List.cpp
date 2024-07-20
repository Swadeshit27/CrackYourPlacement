class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *nxtnode = reverseList(head->next);
        ListNode *front = head;
        front->next->next = head;
        head->next = NULL;
        return nxtnode;
    }
};