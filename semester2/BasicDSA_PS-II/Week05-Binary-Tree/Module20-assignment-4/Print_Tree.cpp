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
    cin >> n;
    Node* root;
    if (n == -1)
        root = NULL;
    else
        root = new Node(n);
    queue<Node*> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node* left;
        Node* right;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);
        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        p->left = left;
        p->right = right;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void printReverseLevel(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    stack<int> s;
    q.push(root);

    while (!q.empty()) {
        Node* node = q.front();
        q.pop();

        s.push(node->val);

        if (node->right)
            q.push(node->right);
        if (node->left)
            q.push(node->left);
    }

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}

int main()
{
    // Write your code here

    Node* root = inputTree();
    printReverseLevel(root);
    
    return 0;
}