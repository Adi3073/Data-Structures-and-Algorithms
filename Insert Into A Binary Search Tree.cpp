// Insert Into A Binary Search Tree

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left, *right;
        TreeNode() : val(0), left(NULL), right(NULL) {}
        TreeNode(T x) : val(x), left(NULL), right(NULL) {}
        TreeNode(T x, TreeNode<T> *left, TreeNode<T> *right) : val(x), left(left), right(right) {}
    };


************************************************************/

TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
{
    // Write your code here.
    if(!root){
        root = new TreeNode<int>(val);
        return root;
    }

    if(val > root->val){
        root->right = insertionInBST(root->right, val);
    }
    else{
        root->left = insertionInBST(root->left, val);
    }

    return root;
}
