// Binary Tree Zigzag Traversal

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

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here!
    vector<int> res;
    if(!root){
        return res;
    }

    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    bool lefttoright=true;
    while(!q.empty()){
        int size = q.size();
        vector<int> ans(size);

        for(int i=0; i<size; i++){
            BinaryTreeNode<int> *frontnode = q.front();
            q.pop();

            int index = lefttoright ? i : size - i - 1;
            ans[index] = frontnode->data;

            if(frontnode->left){
                q.push(frontnode->left);
            }

            if(frontnode->right){
                q.push(frontnode->right);
            }
        }
        lefttoright = !lefttoright;

        for(auto i : ans){
            res.push_back(i);
        }
    }
    return res;
}
