// Find a value in BST

#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

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

************************************************************/
void solve(TreeNode <int> * root, int key, bool &ans){
    if(!root){
        return;
    }
    if(root->data == key){
        ans = true;
    }
    else if(root->data > key){
        solve(root->left, key, ans);
    }
    else{
        solve(root->right, key, ans);
    }
}
bool findNode(TreeNode <int> * root, int key) {
    // Write your code here.
    bool ans = false;
    solve(root, key, ans);
    return ans;
}
