class Solution
{
public:
    ListNode *reverse(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *nxtnode = reverse(head->next);
        ListNode *front = head;
        front->next->next = head;
        head->next = NULL;
        return nxtnode;
    }

    bool isPalindrome(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return 1;
        ListNode *slow = head, *fast = head;
        while (fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = reverse(slow->next);
        slow = slow->next;
        fast = head;
        while (slow != NULL)
        {
            if (slow->val != fast->val)
                return false;
            slow = slow->next;
            fast = fast->next;
        }
        return true;
    }
};