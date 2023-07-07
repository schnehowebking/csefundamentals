#include <bits/stdc++.h>

using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }      
};


Node* deleteDuplicates(Node* head) {

        Node * tmp = head;
        if(head==NULL) return head;
        while(tmp->next != NULL)
        {
            if(tmp->val ==tmp->next->val)
            {
                tmp->next = tmp->next->next;
            }

            if(tmp->next ==NULL)
            {
                break;
            }
            else if(tmp->val != tmp->next->val)
            {
                tmp = tmp->next;
            }
        }
        return head;
        
}


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


Node * sort_asc(Node * head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }

    return head;
}



int main()
{
    // Write your code here

    Node * head = NULL;
    Node * tail = NULL;

    int val;

    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_tail(head, tail, val);
    }

    sort_asc(head);
    deleteDuplicates(head);

    Node* tmp = head;

    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    

    return 0;
}
