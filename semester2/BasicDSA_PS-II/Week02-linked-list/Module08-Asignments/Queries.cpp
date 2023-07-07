#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int pos, val;
        cin >> pos >> val;

        if (pos == 0)
        {
            insert_head(head, val);
            if (tail == NULL)
            {
                tail = head;
            }
        }
        else
        {
            insert_tail(head, tail, val);
            if (head == NULL)
            {
                head = tail;
            }
        }

        cout << head->val << " " << tail->val << endl;
    }
    return 0;
}