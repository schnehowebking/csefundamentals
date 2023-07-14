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

bool isLeafNode(Node* node) {
    return (node != NULL && node->left == NULL && node->right == NULL);
}


void findMinMax(Node* root, int& mn, int& mx) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* f = q.front();
        q.pop();

        if (isLeafNode(f)) {
            mn = min(mn, f->val);
            mx = max(mx, f->val);
        }

        if (f->left)
            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    // Write your code here
    Node* root = inputTree();

    int mn = INT_MAX;
    int mx = INT_MIN;

    findMinMax(root, mn, mx);

    cout<<mx<<" "<<mn<<endl;
    return 0;
}
