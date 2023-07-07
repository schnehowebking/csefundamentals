#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node * prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }      
};
void print_normal(Node * head)
{
    Node * tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

void reverse_doubly(Node * &head, Node * tail)
{
    Node * i = head;
    Node * j = tail;
    while (i !=j && i->next != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val, j->val);
    
}


int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b= new Node(40);
    Node * c= new Node(60);
    Node * d= new Node(50);
    Node * tail = c;
    head->next= a;
    a->prev= head;
    a->next= b;
    b->prev= a;
    b->next= c;
    c->prev= b;
    c->next= d;
    d->prev= c;

    print_normal(head);
    reverse_doubly(head, tail);
    print_normal(head);

    return 0;
}