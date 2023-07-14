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
        this->val = val;
        this->left = NULL;
        this->right = NULL;
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

int sumOfNodes(Node* root)
{
    if (root == NULL)
        return 0;

    int sum = root->val + sumOfNodes(root->left) + sumOfNodes(root->right);
    return sum;
}

int main()
{
    // Write your code here
    Node* root = inputTree();

    int sum = sumOfNodes(root);
    cout << sum << endl;

    return 0;
}
