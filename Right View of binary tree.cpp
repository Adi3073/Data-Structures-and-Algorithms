//Right View of binary tree

/*************************************************************
 
    Following is the Binary Tree node structure:

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
    };

*************************************************************/
void solve(BinaryTreeNode<int>* root, vector<int> &ans, int lvl){
    if(!root)
        return;

    if(lvl == ans.size())
        ans.push_back(root->data);
    
    solve(root->right, ans, lvl+1);
    solve(root->left, ans, lvl+1);
}
vector<int> printRightView(BinaryTreeNode<int>* root) {
    // Write your code here.
    vector<int> ans;
    solve(root, ans, 0);
    return ans;
}
