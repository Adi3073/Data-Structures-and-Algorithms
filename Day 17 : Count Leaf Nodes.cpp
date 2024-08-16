// Day 17 : Count Leaf Nodes

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
void cnt(BinaryTreeNode<int> *root, int &count){
    if(root == NULL){
        return;
    }
    
    cnt(root->left, count);
    if(!root->left && !root->right){
        count++;
    }
    cnt(root->right, count);
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    int count=0;
    cnt(root, count);
    return count;
}
