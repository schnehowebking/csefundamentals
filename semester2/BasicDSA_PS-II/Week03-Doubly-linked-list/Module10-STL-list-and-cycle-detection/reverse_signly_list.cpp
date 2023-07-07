#include<bits/stdc++.h>
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

void recursion_print(Node * n)
{
    //base case
    if(n==NULL) return;
    cout<< n->val<<" ";
    recursion_print(n->next); 
}

void reverse_print(Node * n)
{
    //base case
    if(n==NULL) return;
    reverse_print(n->next); 
    cout<< n->val<<" ";
}

void print_list(Node * head)
{
    Node * tmp = head;
    while (tmp!= NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

void print_reverse(Node * &head, Node * current)
{
    if(current->next== NULL)
    {
        head = current;
        return;
    }
    print_reverse(head, current->next);
    current->next->next = current;
    current->next = NULL;

}

int main()
{

    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);

    head->next= a;
    a->next = b;

    // recursion_print(head);
    // cout<<endl;
    // reverse_print(head);

    print_reverse(head, head);

    print_list(head);
    
    return 0;
}