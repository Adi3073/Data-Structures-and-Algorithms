// Node Level

#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int solve(TreeNode<int>* root, int searchedValue){
    if(!root)
        return 0;

    if(root->val == searchedValue){
        return 1;
    }
    int l=solve(root->left,searchedValue);
    int r=solve(root->right,searchedValue);
    if(l!=0)
    {
        return l+1;
    }
    else if(r!=0)
    {
        return r+1;
    } else {
        return 0;
    }
}
int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    // Write your code here.
    int lvl=solve(root, searchedValue);
    return lvl;
}
