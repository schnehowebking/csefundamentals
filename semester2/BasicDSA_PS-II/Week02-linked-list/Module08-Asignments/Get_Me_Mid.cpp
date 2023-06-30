#include <bits/stdc++.h>

using namespace std;
class Node {
    public:
        int val;
        Node* next;

        Node(int val) {
            this->val = val;
            this->next = NULL;
        }
};

void insert_tail(Node * &head, Node *  &tail, int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail= newNode;
        return;
    }
    tail->next= newNode;
    tail= newNode;
}


int size_of_linkedList(Node * head)
{
    Node * tmp = head;
    int count =0;
    while (tmp!=NULL)
    {
        count++;
        tmp= tmp->next;
    }
    return count;
    
}


int main()
{
    Node *head = NULL;
    Node * tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1) break;
        insert_tail(head,tail, val);
    }
    Node *tmp = head;

    int p = size_of_linkedList(tmp);
    int mid = p+1/2;

    for (int i = 0; i < mid-1; i++)
    {
        /* code */
    }
    
    
    return 0;
}
