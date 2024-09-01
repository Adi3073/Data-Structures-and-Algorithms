// K - Sum Path In A Binary Tree

#include <bits/stdc++.h> 
/*************************************************************
    
    Following is the Binary Tree node structure.
    
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
    
*************************************************************/
void solve(BinaryTreeNode<int>* root, int k, vector<vector<int>>& ans, vector<int> path){
    if(!root)
        return;

    path.push_back(root->data);

    solve(root->left, k, ans, path);
    solve(root->right, k, ans, path);

    int size=path.size();
    int sum=0;
    for(int i=size-1; i>=0; i--){
        sum += path[i];
        if(sum==k){
            vector<int> temp(path.begin() + i, path.end());
            ans.push_back(temp);
        }
    }
    path.pop_back();
}
vector<vector<int>> kPathSum(BinaryTreeNode<int> *root, int k) {
    // Write your code here.
    vector<int> path;
    vector<vector<int>> ans;
    solve(root, k, ans, path);
    return ans;
}
