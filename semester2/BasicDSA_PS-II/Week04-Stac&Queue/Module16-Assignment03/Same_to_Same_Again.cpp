#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }      
};

class myStack
{
    public:
        Node * head = NULL;
        Node * tail = NULL;
        int sz = 0;


    void push(int val)
    {
        sz++;
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

    void pop()
    {
        sz--;
        Node * deleteNode = tail;
        tail = tail->prev;
        if(tail == NULL) head =NULL;
        else tail->next =NULL;
        delete deleteNode;
    }

    int top()
    {
        return tail->val;
        
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        if(sz==0) return true;
        else return false;
    }


};

class myQueue
{
    public:
        Node * head = NULL;
        Node * tail = NULL;
        int sz=0;
    void push(int val)
    {
        sz++;
        
        Node * newNode = new Node(val);
        if(head ==NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev=tail;
        tail = tail->next;

    }

    void pop()
    {
        sz--; 
        Node * deleteNode = head;
        head = head->next;
        if(head==NULL)
        {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev= NULL;
       
        delete deleteNode;
    }


    int front()
    {
        return head->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        if(sz==0) return true;
        else return false;
    }

};

bool isSame(myStack st, myQueue q)
{
    while (!st.empty() && !q.empty()) {
        if (st.top() != q.front()) return false;
        st.pop();
        q.pop();
    }

    if (!st.empty() || !q.empty()) return false;
    return true;

}


int main()
{
    // Write your code here

    int n, m;
    cin >> n >> m;

    myStack stack;
    myQueue queue;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        stack.push(val);
    }

    for (int i = 0; i < m; i++) {
        int val;
        cin >> val;
        queue.push(val);
    }

    if (isSame(stack, queue))cout<<"YES" <<endl;
    else cout<<"NO"<<endl;

    return 0;

}
