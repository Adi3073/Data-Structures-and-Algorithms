// Is Node Present?

/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
bool isNodePresent(BinaryTreeNode<int> *root, int x) {

    // Write your code here

    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    while(!q.empty())
    {
        BinaryTreeNode<int>*temp = q.front();
        q.pop();
        if(temp->data==x){return true;}
        if(temp->left){q.push(temp->left);}
        if(temp->right){q.push(temp->right);}
    }
    return false;
}
