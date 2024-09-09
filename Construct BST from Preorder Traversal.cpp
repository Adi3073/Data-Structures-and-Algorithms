// Construct BST from Preorder Traversal

/*************************************************************

    Following is the Binary Tree node structure
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*************************************************************/
TreeNode* solve(vector<int> &preOrder, int mini, int maxi, int& i){
    if(i>= preOrder.size()){
        return NULL;
    }
    if(preOrder[i] < mini || preOrder[i] > maxi){
        return NULL;
    }

    TreeNode* root = new TreeNode(preOrder[i++]);
    root->left = solve(preOrder, mini, root->data, i);
    root->right = solve(preOrder, root->data, maxi, i);
    return root;
}
TreeNode *preOrderTree(vector<int> &preOrder)
{
    // Write your code here.
    int mini=INT_MIN;
    int maxi=INT_MAX;
    int i=0;
    return solve(preOrder, mini, maxi, i);
}
