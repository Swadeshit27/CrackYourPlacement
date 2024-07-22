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
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int len = 0;
        ListNode *temp = head;
        while (temp != NULL)
        {
            len++;
            temp = temp->next;
        }
        // remove the first
        if (n == len)
            return head->next;
        temp = head;
        int ind = len - n - 1;
        // cout<<ind<<endl;
        while (ind--)
        {
            temp = temp->next;
        }
        // cout<<temp->val<<endl;
        // remove last one
        temp->next = temp->next->next;
        return head;
    }
};