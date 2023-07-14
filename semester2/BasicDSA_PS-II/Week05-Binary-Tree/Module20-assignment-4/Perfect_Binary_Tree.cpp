#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* inputTree() {
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

    while (!q.empty()) {
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

int Height(Node* root) {
    if (root == NULL) return 0;
    else  return max(Height(root->left), Height(root->right)) + 1;
}

int NodeCount(Node* root) {
    if (root == NULL)  return 0;
    else return NodeCount(root->left) + NodeCount(root->right) + 1;
}

bool isPerfect(Node* root, int height, int nodeCount) {
    int exC = pow(2, height) - 1;
    return nodeCount == exC;
}

string isPerfectBT(Node* root) {
    int height = Height(root);
    int nodeCount = NodeCount(root);

    if (isPerfect(root, height, nodeCount)) return "YES";
    else return "NO";
}

int main() {
    // Write your code here

    Node* root = inputTree();
    string result = isPerfectBT(root);
    cout << result << endl;

    return 0;
}
