// Normal BST To Balanced BST

/*************************************************************
    Following is the Binary Serach Tree node structure

    template <typename T>
    class TreeNode
    {
    public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };

*************************************************************/
void inorder(TreeNode<int>* root, vector<int> &ino){
    if(!root)
        return;

     if(root -> left!= NULL){
        inorder(root -> left,ino);
    }
    ino.push_back(root->data);
     if(root -> right !=NULL){
        inorder(root -> right,ino);
    }
}
TreeNode<int>*toBST(int s, int e, vector<int> &ino){
    if(s>e){
        return NULL;
    }

    int mid = s+(e-s)/2;
    TreeNode<int>* root = new TreeNode<int>(ino[mid]);
    root->left = toBST(s, mid-1, ino);
    root->right = toBST(mid+1, e, ino);
    return root;
}
TreeNode<int>* balancedBst(TreeNode<int>* root) {
    // Write your code here.
    vector<int> ino;
    inorder(root, ino);

    return toBST(0, ino.size()-1, ino);
} 
