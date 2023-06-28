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
void print_linked_list(Node * head)
{
    cout<<endl;
    cout<<"Your Linked List: ";
    Node * tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp= tmp->next;
    }
    cout<<endl<<endl;
    
}
void insert_at_head(Node * &head, int v)
{
    Node * newNode = new Node(v);
    newNode->next=head;
    head = newNode;
    cout<<endl<<"Insert at Head"<<endl<<endl;

}

void insert_at_position(Node * head, int pos, int v)
{
    Node * newNode = new Node(v);
    Node * tmp=head;
    for (int i = 0; i < pos-1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next =tmp->next;
    tmp->next= newNode;
    cout<<endl<<endl<<"Inserted at Position "<<pos<<endl<<endl;


}

void insert_at_tail(Node * &head, int v)
{
    Node * newNode = new Node(v);
    if(head==NULL)
    {
        head = newNode;
        cout<<endl<<"Inserted at head"<<endl<<endl;
        return;
        
    }
    Node * tmp = head;
    while(tmp->next != NULL)
    {
        tmp= tmp->next;
    }
    // tmp is now in last
    tmp->next=newNode;
    cout<<endl<<"Inserted at tail"<<endl<<endl;

}


int main()
{
    Node * head = NULL;
    while (true)
    {
        cout<<"Option 1: Insert at tail "<<endl;
        cout<<"Option 2: Print Linked List "<<endl;
        cout<<"Option 3: Insert At Any POstions "<<endl;
        cout<<"Option 4: Insert at Head "<<endl;
        cout<<"Option 5: Terminate "<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Please enter value: ";
            int v;
            cin>>v;
            insert_at_tail(head, v);

        }
        else if(op==2)
        {
            print_linked_list(head);
        }
        else if (op==3)
        {
           int pos, v;
           cout<<"Enter Position: ";
           cin>>pos;
           cout<<"Enter a value: ";
           cin>>v;
           if(pos==0)
           {
                insert_at_head(head, v);
           }
           else
           {
                insert_at_position(head, pos, v);
           }
        }
        else if (op==4)
        {
            int v;
            cout<<"Enter a value: ";
            cin>>v;
            insert_at_head(head, v);
        }
        
        else if (op==5)
        {
            print_linked_list(head);
            break;
        }
        
    }
    
    return 0;
}