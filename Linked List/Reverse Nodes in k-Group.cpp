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
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *pre = dummy, *curr = dummy, *nxt = dummy;
        int cnt = 0;
        while (curr->next != NULL)
        {
            curr = curr->next;
            cnt++;
        }
        while (cnt >= k)
        {
            curr = pre->next;
            nxt = curr->next;
            for (int i = 1; i < k; i++)
            {
                curr->next = nxt->next;
                nxt->next = pre->next;
                pre->next = nxt;
                nxt = curr->next;
            }
            pre = curr;
            cnt -= k;
        }
        return dummy->next;
    }
};