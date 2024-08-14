// Height of Binary Tree

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int heightOfBinaryTree(TreeNode<int> *root)
{
	// Write your code here.
    if(!root){
        return 0;
    }
    int lt = heightOfBinaryTree(root->left);
    int rt = heightOfBinaryTree(root->right);

    int ans = max(lt, rt) + 1;
    return ans;
}
