#include<bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode {
    public:
    T val;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};



vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.

    vector<int>v;

    if(root==NULL)
    {
        return;
    }
    queue<BinaryTreeNode<int> *>q;
    q.push(root);
    while(!q.empty())
    {

        BinaryTreeNode<int>  * f = q.front();
        q.pop();

        v.push_back(root->val);

        if(f->left != NULL)
        {
            q.push(f->left);
        }
        if(f->right != NULL)
        {
            q.push(f->right);
        }
    }
    return v;
}




int main()
{
    
    return 0;
}