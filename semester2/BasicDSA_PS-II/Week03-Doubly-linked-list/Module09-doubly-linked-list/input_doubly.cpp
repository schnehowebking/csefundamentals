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
void print_reverse(Node * tail)
{
    Node * tmp= tail;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
    

}


int size_of(Node * head)
{
    Node * tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
    
}
void delete_at_pos(Node * head, int pos)
{
    Node * tmp = head;
    for(int i = 1; i<=pos-1; i++)
    {
        tmp = tmp->next;
    }
    Node * deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}

void delete_tail(Node * &tail)
{
    Node * deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;
}
void delete_head(Node * &head)
{
    Node * deleteNode = head;
    head = head->next;
    delete deleteNode;
    head->prev = NULL;
}

void insert_tail(Node * &head, Node * &tail, int val)
{
    Node * newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next =  newNode;
    newNode->prev = tail;
    tail = tail->next;

}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_tail(head, tail, val);
    
    }
    print_normal(head);
    print_reverse(tail);
    
    return 0;
}