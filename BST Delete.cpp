// BST Delete

#include <bits/stdc++.h> 
/**********************************************************
        Following is the Binary Tree Node class structure

        template <typename T>
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

***********************************************************/
BinaryTreeNode<int>* minVal(BinaryTreeNode<int>* root){
    BinaryTreeNode<int>* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

BinaryTreeNode<int>* bstDelete(BinaryTreeNode<int>* root, int key) {
    // Write your code here
    if(!root){
        return root;
    }

    if(root->data == key){
        if(!root->left && !root->right){
            delete root;
            return NULL;
        }

        if(root->left && !root->right){
            BinaryTreeNode<int>* temp = root->left;
            delete root;
            return temp;
        }

        if(!root->left && root->right){
            BinaryTreeNode<int>* temp = root->right;
            delete root;
            return temp;
        }

        if(root->left && root->right){
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = bstDelete(root->right, mini);
            return root;
        }
    }
    else if(root->data < key){
        root->right = bstDelete(root->right, key);
        return root;
    }
    else{
        root->left = bstDelete(root->left, key);
        return root;
    }
}
