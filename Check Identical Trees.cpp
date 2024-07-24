// Check Identical Trees

/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>

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
    };

***********************************************************/

bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    // Write your code here. 	 
    if(!root1 && !root2){
        return true;
    }
    if(root1 && !root2){
        return false;
    }
    if(!root1 && root2){
        return false;
    }

    bool l = identicalTrees(root1->left, root2->left);
    bool r = identicalTrees(root1->right, root2->right);
    bool val = root1->data == root2->data;

    if(l && r && val){
        return true;
    }
    else{
        return false;
    }
}
