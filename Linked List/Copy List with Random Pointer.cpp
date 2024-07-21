

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        if (head == NULL)
            return head;
        Node *temp = head;
        while (temp != NULL)
        {
            Node *nxt = temp->next;
            Node *newnode = new Node(temp->val);
            temp->next = newnode;
            newnode->next = nxt;
            temp = nxt;
        }
        temp = head;
        Node *dummy = temp->next;
        while (temp != NULL)
        {
            Node *newnode = temp->next;
            if (temp->random)
            {
                newnode->random = temp->random->next;
            }
            else
            {
                newnode->random = NULL;
            }
            temp = temp->next->next;
        }
        temp = head;
        while (temp != NULL)
        {
            Node *curr = temp->next;
            temp->next = curr->next;
            temp = temp->next;
            if (temp)
                curr->next = temp->next;
            else
                curr->next = NULL;
        }
        return dummy;
    }
};