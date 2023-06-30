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

void print_original(Node * head)
{
    if(head==NULL) return;
    cout<<head->val<<" "; 
    print_original(head->next);
}
void print_reverse(Node * head)
{
    if(head==NULL) return;
    print_reverse(head->next);
    cout<<head->val<<" ";  
}



int main()
{
    // Write your code here
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_tail(head, tail, val);

    }
    
    print_reverse(head);
    cout<<endl;
    print_original(head);
    
    

    return 0;
}
