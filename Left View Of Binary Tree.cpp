// Left View Of Binary Tree

void solve(BinaryTreeNode<int>* root, vector<int> &ans, int lvl){
    if(!root)
        return;

    if(lvl == ans.size())
        ans.push_back(root->data);

    solve(root->left, ans, lvl+1);
    solve(root->right, ans, lvl+1);
}

vector<int> printLeftView(BinaryTreeNode<int>* root) {
    // Write your code here.
    vector<int> ans;
    solve(root, ans, 0);
    return ans;
}
