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
    
    tmp->next=newNode;

}

int main()
{
    int val;
    Node *head = NULL;
    int mx = INT_MIN;
    int mn = INT_MAX;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head, val);
    }
    
    while (head->val != NULL)
    {
        if(head->val>mx)
        {
            mx = head->val;
        }
        else if (head->val<mn)
        {
            mn=head->val;
        }
    }

    cout<<mx<<" "<<mn<<endl;
    return 0;
}