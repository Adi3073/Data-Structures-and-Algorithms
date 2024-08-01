// Boundary Traversal of Binary Tree

/************************************************************

    Following is the Binary Tree node structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode()
        {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void traverseLeft(TreeNode<int> *root, vector<int> &ans){
    if((!root) || (!root->left && !root->right)){
        return;
    }

    ans.push_back(root->data);
    if(root->left){
        traverseLeft(root->left, ans);
    }
    else{
        traverseLeft(root->right, ans);
    }

}

void traverse(TreeNode<int> *root, vector<int> &ans){
    if(!root){
        return;
    }

    if(!root->left && !root->right){
        ans.push_back(root->data);
        return;
    }

    traverse(root->left, ans);
    traverse(root->right, ans);
}

void traverseRight(TreeNode<int> *root, vector<int> &ans){
    if((!root) || (!root->left && !root->right)){
        return;
    }

    if(root->right){
        traverseRight(root->right, ans);
    }
    else{
        traverseRight(root->left, ans);
    }

    ans.push_back(root->data);
}

vector<int> traverseBoundary(TreeNode<int> *root)
{
	// Write your code here.
    vector<int> ans;
    if(!root){
        return ans;
    }
    ans.push_back(root->data);
    traverseLeft(root->left, ans);

    traverse(root->left, ans);

    traverse(root->right, ans);

    traverseRight(root->right, ans);

    return ans;
}
