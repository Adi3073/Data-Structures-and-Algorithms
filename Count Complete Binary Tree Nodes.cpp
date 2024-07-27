// Count Complete Binary Tree Nodes

#include <bits/stdc++.h> 
/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/
void sum(TreeNode<int> *root, int &s){
    if(!root){
        return;
    }
    s++;
    sum(root->left, s);
    sum(root->right, s);
}
int countNodes(TreeNode<int> *root)
{
    //    Write your code here.
    int s=0;
    sum(root, s);
    return s;
}
