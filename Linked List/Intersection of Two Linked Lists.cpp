class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2)
    {
        ListNode *slow = head1, *fast = head2;
        while (fast != NULL || slow != NULL)
        {
            if (fast == slow)
                return slow;
            fast = fast == NULL ? head1 : fast->next;
            slow = slow == NULL ? head2 : slow->next;
        }
        return NULL;
    }
};