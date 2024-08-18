// Is Height Balanced Binary Tree

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
pair<bool, int> isfast(TreeNode<int>* root){
    if(!root){
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    
    pair <int, int> left = isfast(root->left);
    pair <int, int> right = isfast(root->right);
    
    bool lans = left.first;
    bool rans = right.first;
    bool diff = abs(left.second - right.second) <= 1;
    pair<bool, int> ans;
    ans.second = max(left.second, right.second)+1;
    if(lans && rans && diff){
        ans.first = true;
    }
    else{
        ans.first = false;
    }
    return ans;
}
bool isBalancedBT(TreeNode<int>* root){
    // Write your code here.
    return isfast(root).first;
}
