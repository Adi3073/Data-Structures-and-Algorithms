// Convert A Given Binary Tree To Doubly Linked List

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
void convertintoDLL(BinaryTreeNode<int>*root, BinaryTreeNode<int>*&head){
    if(!root){
        return ;
    }

    convertintoDLL(root->right, head);
    root->right = head;

    if(head){
        head->left = root;
    }
    head=root;
    convertintoDLL(root->left, head);
}
BinaryTreeNode<int>* BTtoDLL(BinaryTreeNode<int>* root) {
    // Write your code here
    BinaryTreeNode<int>* head=NULL;
    convertintoDLL(root, head);
    return head;
}
