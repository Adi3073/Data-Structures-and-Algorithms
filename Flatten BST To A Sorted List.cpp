// Flatten BST To A Sorted List

#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void inorder(TreeNode<int>* root, vector<int> &ino){
    if(!root)
        return;

     if(root -> left!= NULL){
        inorder(root -> left,ino);
    }
    ino.push_back(root->data);
     if(root -> right !=NULL){
        inorder(root -> right,ino);
    }
}
TreeNode<int>* flatten(TreeNode<int>* root)
{
    // Write your code here
    vector<int> v;
    inorder(root, v);
    TreeNode<int>* newroot=new TreeNode<int>(v[0]);
    TreeNode<int>* curr=newroot;
    for(int i=1;i<v.size();i++){
        TreeNode<int>* temp=new TreeNode<int>(v[i]);
        curr->left=NULL;
        curr->right=temp;
        curr=temp;
    }
    curr->left=NULL;
    curr->right=NULL;
    return newroot;
}
