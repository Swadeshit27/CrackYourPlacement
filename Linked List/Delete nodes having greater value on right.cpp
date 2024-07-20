//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void print(Node *root)
{
    Node *temp = root;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
public:
    Node *reverseList(Node *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        Node *nxtnode = reverseList(head->next);
        Node *front = head;
        front->next->next = head;
        head->next = NULL;
        return nxtnode;
    }
    Node *compute(Node *head)
    {
        Node *temp = reverseList(head);
        Node *ans = temp;
        Node *headans = ans;
        temp = temp->next;
        ans->next = NULL;
        while (temp != NULL)
        {
            if (temp->data >= ans->data)
            {
                ans->next = temp;
                temp = temp->next;
                ans = ans->next;
                ans->next = NULL;
            }
            else
                temp = temp->next;
        }
        headans = reverseList(headans);
        return headans;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int K;
        cin >> K;
        struct Node *head = NULL;
        struct Node *temp = head;

        for (int i = 0; i < K; i++)
        {
            int data;
            cin >> data;
            if (head == NULL)
                head = temp = new Node(data);
            else
            {
                temp->next = new Node(data);
                temp = temp->next;
            }
        }
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout << endl;
    }
}

// } Driver Code Ends