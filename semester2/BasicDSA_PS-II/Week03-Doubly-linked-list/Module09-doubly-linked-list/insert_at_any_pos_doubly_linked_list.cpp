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

void insert_at_position(Node * head, int pos, int val)
{
    Node * newNode = new Node(val);
    Node * tmp = head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next;

    }
    newNode->next = tmp->next; //50>30
    tmp->next= newNode;// 20>50
    newNode->next->prev = newNode; //50<30
    newNode->prev=tmp; //20<50

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

int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b= new Node(30);
    Node * c = new Node(40);
    Node * tail = c;
    head->next= a;
    a->prev= head;
    a->next= b;
    b->prev= a;
    b->next = c;
    c->prev = b;

    int pos,val;
    cin>>pos>>val;

    if(pos>=size_of(head))
    {
        cout<<"Invalid"<<endl;
    }
    else
    {
        insert_at_position(head, pos, val);
        print_normal(head);
        print_reverse(tail);
    }


    



    
    return 0;
}