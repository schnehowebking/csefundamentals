#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }      
};

void levelOrderLeft(Node * root)
{
    if(root==NULL)
    {
        cout<<"No Tree"<<endl;
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        // ber kore ana...
        Node * f = q.front();
        q.pop();

        // jabotiyo kaj...

        cout<<f->val<<" ";

        //childer rakha...
        if(f->left != NULL)
        {
            q.push(f->left);
        }
        if(f->right != NULL)
        {
            q.push(f->right);
        }
    }
}
void levelOrderRight(Node * root)
{
    if(root==NULL)
    {
        cout<<"No Tree"<<endl;
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        // ber kore ana...
        Node * f = q.front();
        q.pop();

        // jabotiyo kaj...

        cout<<f->val<<" ";

        //childer rakha...
        if(f->right != NULL)
        {
            q.push(f->right);
        }
        if(f->left != NULL)
        {
            q.push(f->left);
        }

    }
}

int main()
{
    // // level order er jonno koroniyo

    // 1. Line theke ano,
    // 2. jabotiyo kaj koro,
    // 3. children guloke line a dao,


    Node * root = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);
    Node * e = new Node(60);
    Node * f = new Node(70);
    Node * g = new Node(80);
    Node * h = new Node(90);
    Node * i = new Node(100);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    h->right = i;
    b->right=d;
    d->left = f;
    d->right = g;

    levelOrderLeft(root);
    cout<<endl;
    levelOrderRight(root);
    
    return 0;
}