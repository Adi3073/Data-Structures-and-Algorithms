// Least Common Ancestor

#include <bits/stdc++.h> 
/****************************************************************
    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        ~BinaryTreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };

*****************************************************************/


BinaryTreeNode<int>* findLCA(BinaryTreeNode<int>* root, BinaryTreeNode<int>* u, BinaryTreeNode<int>* v) {
    // Write your code here.
    if(!root || !u || !v){
        return NULL;
    }

    if(root->data == u->data || root->data == v->data){
        return root;
    }

    BinaryTreeNode<int>* leftAns = findLCA(root->left, u, v);
    BinaryTreeNode<int>* rightAns = findLCA(root->right, u, v);

    if(leftAns && rightAns){
        return root;
    }
    else if(leftAns && !rightAns){
        return leftAns;
    }
    else if(!leftAns && rightAns){
        return rightAns;
    }

    return NULL;
    
}
