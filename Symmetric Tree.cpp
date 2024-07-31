// Symmetric Tree

/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/
void inorder(BinaryTreeNode<int>* root, vector<int> &v){
    if(!root){
        return;
    }

    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}
bool ispalindrome(vector<int> v){
    int n=v.size();
    bool ans = false;
    for(int i=0; i<n/2; i++){
        if(v[i] == v[n-i-1]){
            ans = true;
        }
        else{
            ans = false;
            break;
        }
    }
    return ans;
}
bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here.
    if(!root){
        return true;
    }
    vector<int> v;
    inorder(root, v);
    if(ispalindrome(v)){
        return true;
    }
    else{
        return false;
    }

}
