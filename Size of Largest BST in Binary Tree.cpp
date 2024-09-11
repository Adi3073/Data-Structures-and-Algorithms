// Size of Largest BST in Binary Tree

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
class info{
    public:
        int maxi;
        int mini;
        int size;
        bool isBST;
};

info solve(TreeNode * root, int &ans){
    if(!root){
        return {INT_MIN, INT_MAX, 0, true};
    }

    info left = solve(root->left, ans);
    info right = solve(root->right, ans);

    info currNode;
    currNode.maxi = max(root->data, right.maxi);
    currNode.mini = min(root->data, left.mini);
    currNode.size = left.size + right.size + 1;

    if(left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini)){
        currNode.isBST = true;
    }
    else{
        currNode.isBST = false;
    }

    if(currNode.isBST){
        ans = max(ans, currNode.size);
    }
    return currNode;
}

int largestBST(TreeNode * root){
    // Write your code here.
    int maxSize=0;
    info temp = solve(root, maxSize);
    return maxSize;
}
