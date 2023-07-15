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

bool binarysearch(Node*root, int x)
{
    if(root==NULL) return false;
    if(root->val==x) return true;

    if(x<root->val)
    {
        return binarysearch(root->left, x);
    }
    else
    {
        return binarysearch(root->right, x);
    }
}

void insertBst(Node* &root, int x)
{
    if(root == NULL) 
    {
        root = new Node(x);
        return;
    }
    if(x < root->val)
    {

        if(root->left==NULL)
        {
            root->left= new Node(x);
        }
        else
        {
            insertBst(root->left, x);
        }
        
    }
    else
    {
        if(root->right==NULL)
        {
            root->right= new Node(x);
        }
        else
        {
            insertBst(root->right, x);
        }
    }
}


int main()
{
   
    // 1 ta node insert complexity O(H),
    // n ta node isert complexity O(nH)
    Node * root = inputTree();
    int x;
    cin>>x;
    insertBst(root, x);
    insertBst(root, 32);
    insertBst(root, 22);
    insertBst(root, 27);
    levelOrderLeft(root);
   
    
    return 0;
}