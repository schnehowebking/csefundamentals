#include<bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode {
    public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int mx = 0;


int maxheight(TreeNode<int>*root)
{
    if(root==NULL) return 0;
    int  l = maxheight(root->left);
    int  r = maxheight(root->right);
    int d = l+r;
    mx = max(mx, d);

    return max(l,r)+1;

}


int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.

    mx = 0;
    int h = maxheight(root);
    return mx;
}


int main()
{
    
    return 0;
}