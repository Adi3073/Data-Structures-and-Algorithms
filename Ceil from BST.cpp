// Ceil from BST

#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

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
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/
void inorder(BinaryTreeNode<int> *root, vector<int> &v){
    if(!root){
        return;
    }

    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}
int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.
    int ans=-1;
    vector<int> v;
    inorder(node, v);
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        if(x <= v[i]){
            ans = v[i];
            break;
        }
    }
    return ans;
}
