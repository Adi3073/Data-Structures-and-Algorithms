// Find K-th smallest Element in BST

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
void inorder(BinaryTreeNode<int>* root,int &k,int &count,int &ans){
    if(!root) return;
    inorder(root->left,k,count,ans);
    count++;
    if(count == k) {
        ans = root->data;
        return;
    }
    inorder(root->right,k,count,ans);
}
int kthSmallest(BinaryTreeNode<int>* root, int k) {
    // Write your code here.
    int ans =-1;
    int count = 0;
    inorder(root,k,count,ans);
    return ans;
}
