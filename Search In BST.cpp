// Search In BST

/*
    Following is the Binary Tree node structure:

    template <typename T>
    class BinaryTreeNode
    {
    public:
        T data;
        BinaryTreeNode<T> *left, *right;
        BinaryTreeNode() : data(0), left(NULL), right(NULL) {}
        BinaryTreeNode(T x) : data(x), left(NULL), right(NULL) {}
        BinaryTreeNode(T x, BinaryTreeNode<T> *left, BinaryTreeNode<T> *right) : data(x), left(left), right(right) {}
    };

*/

void solve(BinaryTreeNode<int> *root, int x, bool &ans){
    if(!root){
        ans = false;
        return;
    }

    if(root->data == x){
        ans = true;
    }
    else if(root->data > x){
        solve(root->left, x, ans);
    }
    else{
        solve(root->right, x, ans);
    }
}

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
    bool ans=false;
    solve(root, x, ans);
    return ans;
}
