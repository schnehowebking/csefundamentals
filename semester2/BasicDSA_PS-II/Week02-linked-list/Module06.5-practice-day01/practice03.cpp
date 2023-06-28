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

void insert_at_tail(Node * &head, int v)
{
    Node * newNode = new Node(v);
    if(head==NULL)
    {
        head = newNode;
        return;
        
    }
    Node * tmp = head;
    while(tmp->next != NULL)
    {
        tmp= tmp->next;
    }
    // tmp is now in last
    tmp->next=newNode;

}

int main()
{
     
    return 0;
}