// Boundary Traversal

#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void traverseLeft(TreeNode<int> *root, vector<int> &ans){
    if((!root) || (!root->left && !root->right)){
        return;
    }

    ans.push_back(root->val);
    if(root->left){
        traverseLeft(root->left, ans);
    }
    else{
        traverseLeft(root->right, ans);
    }

}

void traverse(TreeNode<int> *root, vector<int> &ans){
    if(!root){
        return;
    }

    if(!root->left && !root->right){
        ans.push_back(root->val);
        return;
    }

    traverse(root->left, ans);
    traverse(root->right, ans);
}

void traverseRight(TreeNode<int> *root, vector<int> &ans){
    if((!root) || (!root->left && !root->right)){
        return;
    }

    if(root->right){
        traverseRight(root->right, ans);
    }
    else{
        traverseRight(root->left, ans);
    }

    ans.push_back(root->val);
}
vector<int> boundaryTraversal(TreeNode<int> *root)
{
    //    Write your code here
    vector<int> ans;
    if(!root){
        return ans;
    }
    ans.push_back(root->val);
    traverseLeft(root->left, ans);

    traverse(root->left, ans);

    traverse(root->right, ans);

    traverseRight(root->right, ans);

    return ans;
}
