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


Node* inputTree()
{
    int n;
    cin>>n;
    Node * root;
    if(n==-1) root=NULL;
    else root = new Node(n);
    queue<Node*> q;
    if(root) q.push(root);
    while (!q.empty())
    {
        // ber kore ana...
        Node * p = q.front();
        q.pop();

        // jabotiyo kaj...
        int l, r;

        cin>>l>>r;

        Node * left;
        Node * right;
        if(l==-1) left =NULL;
        else left = new Node(l);
        if(r==-1) right =NULL;
        else right  = new Node(r);

        p->left = left;
        p->right = right;

        //childer push...
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;

}

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

int main()
{
    Node *root=inputTree();

    levelOrderLeft(root);
    
    return 0;
}