// Two Sum IV - Input is a BST

#include <bits/stdc++.h> 
// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
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
***************/
void inorder(BinaryTreeNode<int>* root, vector<int> &ino){
    if(!root)
        return;

    inorder(root->left, ino);
    ino.push_back(root->data);
    inorder(root->right, ino);
}
bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	//Write your code here
    vector<int> ino;
    inorder(root, ino);
    int i=0, j=ino.size()-1;
    while(i<j){
        int sum = ino[i] + ino[j];

        if(sum==target)
            return true;
        else if(sum > target)
            j--;
        else
            i++;
    }
    return false;
}
