// LCA of three Nodes

/**********************************************************
    Following is the Binary Tree Node class structure.

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
BinaryTreeNode<int> * lca(BinaryTreeNode<int> *root, int x, int y){
    if(!root){
        return NULL;
    }

    if(root->data == x || root->data == y){
        return root;
    }

    BinaryTreeNode<int>* leftAns = lca(root->left, x, y);
    BinaryTreeNode<int>* rightAns = lca(root->right, x, y);

    if(leftAns && rightAns){
        return root;
    }
    else if(leftAns && !rightAns){
        return leftAns;
    }
    else if(!leftAns && rightAns){
        return rightAns;
    }
    else{
        return NULL;
    }
}
BinaryTreeNode<int>* lcaOfThreeNodes(BinaryTreeNode<int>* root, int node1, int node2, int node3) {
    // Write your code here.
	BinaryTreeNode<int> *n = lca(root, node1, node2);
	int node4 = n->data;
	BinaryTreeNode<int>* ans = lca(root, node3, node4);
	return ans;
}
