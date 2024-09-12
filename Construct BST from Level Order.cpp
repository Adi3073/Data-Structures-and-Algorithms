// Construct BST from Level Order

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

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
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
BinaryTreeNode<int>* solve(vector<int> &preOrder, int mini, int maxi, int& i){
    if(i>= preOrder.size()){
        return NULL;
    }
    if(preOrder[i] < mini || preOrder[i] > maxi){
        return NULL;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(preOrder[i++]);
    root->left = solve(preOrder, mini, root->data, i);
    root->right = solve(preOrder, root->data, maxi, i);
    return root;
}
BinaryTreeNode<int>* constructBst(vector<int>& levelOrder)
{
    // Write Your Code Here.
    sort(levelOrder.begin(), levelOrder.end());
    int mini=INT_MIN;
    int maxi=INT_MAX;
    int i=0;
    return solve(levelOrder, mini, maxi, i);
}
