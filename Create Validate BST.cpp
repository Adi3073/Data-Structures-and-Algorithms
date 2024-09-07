// Validate BST

#include <bits/stdc++.h> 
/*************************************************************
    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode 
    {
      public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() 
        {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/
bool isBST(BinaryTreeNode<int>* root, int min, int max){
    if(!root){
        return true;
    }

    if(root->data >= min && root->data < max){
        bool l = isBST(root->left, min, root->data);
        bool r = isBST(root->right, root->data, max);
        return l && r;
    }
    else{
        return false;
    }
}
bool validateBST(BinaryTreeNode<int>* root) 
{
    // Write your code here
    return isBST(root, INT_MIN, INT_MAX);
}
