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


void insert_at_tail(Node*& head, int val)
{
    Node* newNode = new Node(val);
    
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node* tmp = head;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        
        tmp->next = newNode;
    }
}



int main()
{
    // Write your code here
    
    int val;
    Node *head = NULL;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head, val);
    }
    
    int mx = INT_MIN;
    int mn = INT_MAX;
    Node* tmp = head;
    while (tmp != NULL)
    {
        mx = max(mx, tmp->val);
        mn = min(mn, tmp->val);
        tmp = tmp->next;
    }

    cout<<mx<<" "<<mn<<endl;

    return 0;
}
