class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *temp = head;
        while (temp != NULL && temp->next != NULL)
        {
            if (temp->val == temp->next->val)
            {
                ListNode *nxt = temp->next->next;
                delete temp->next;
                temp->next = nxt;
            }
            else
                temp = temp->next;
        }
        return head;
    }
};