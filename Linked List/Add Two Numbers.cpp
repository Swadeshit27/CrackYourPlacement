
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode(-1);
        ListNode *curr = dummy;
        int carry = 0;
        while (l1 != NULL || l2 != NULL)
        {
            int a = l1 == NULL ? 0 : l1->val;
            int b = l2 == NULL ? 0 : l2->val;
            int sum = a + b + carry;
            carry = sum / 10;
            ListNode *newnode = new ListNode(sum % 10);
            curr->next = newnode;
            curr = curr->next;
            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }
        if (carry)
        {
            ListNode *newnode = new ListNode(carry);
            curr->next = newnode;
            curr = curr->next;
        }
        return dummy->next;
    }
};