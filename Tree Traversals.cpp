// Tree Traversals

/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void inorder(TreeNode* root, vector<int> &v){
    if(!root){
        return;
    }

    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}
void preorder(TreeNode* root, vector<int> &v){
    if(!root){
        return;
    }

    v.push_back(root->data);
    preorder(root->left, v);
    preorder(root->right, v);
}
void postorder(TreeNode* root, vector<int> &v){
    if(!root){
        return;
    }

    postorder(root->left, v);
    postorder(root->right, v);
    v.push_back(root->data);
}
vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<vector<int>> v;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    inorder(root, v1);
    preorder(root, v2);
    postorder(root, v3);
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    return v;
}
