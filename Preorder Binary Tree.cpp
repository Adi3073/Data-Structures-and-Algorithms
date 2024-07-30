// Preorder Binary Tree

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void preorder(TreeNode<int>* root, vector<int> &v){
    if(!root){
        return;
    }

    v.push_back(root->data);
    preorder(root->left, v);
    preorder(root->right, v);
}

vector<int> preOrder(TreeNode<int> * root){
    // Write your code here.
    vector<int> v;
    preorder(root, v);
    return v;
}
