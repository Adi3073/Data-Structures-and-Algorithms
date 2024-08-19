// Kth ancestor of a node in binary tree

#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
BinaryTreeNode<int> * lca(BinaryTreeNode<int> *root, int targetNodeVal, int &k){
    if(!root){
        return NULL;
    }

    if(root->data == targetNodeVal){
        return root;
    }
    BinaryTreeNode<int>* leftAns = lca(root->left, targetNodeVal, k);
    BinaryTreeNode<int>* rightAns = lca(root->right, targetNodeVal, k);

    if(leftAns && !rightAns){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
        return leftAns;
    }
    if(!leftAns && rightAns){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
        return rightAns;
    }
    return NULL;
}
int findKthAncestor(BinaryTreeNode<int> *root, int targetNodeVal, int k) {
    // Write your code here.
    int count=0;
    BinaryTreeNode<int>* ans = lca(root, targetNodeVal, k);
    if(!ans || ans->data == targetNodeVal){
        return -1;
    }
    else{
        return ans->data;
    }
}
