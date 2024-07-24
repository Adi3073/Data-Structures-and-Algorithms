//Check If Binary Tree Is Sum Tree Or Not

#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
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
        if(!root->left && !root->right){
            pair<bool, int> p = make_pair(true, root->val);
            return p;
        }
        
        pair<bool, int> l = isfast(root->left);
        pair<bool, int> r = isfast(root->right);
        
        bool lt = l.first;
        bool rt = r.first;
        bool cond = root->val == l.second+r.second;
        
        pair<bool, int> ans;
        if(lt && rt && cond){
            ans.first = true;
            ans.second = 2*root->val;
        }
        else{
            ans.first =  false;
        }
        return ans;
    }
bool isSumTree(TreeNode<int> *root)
{
    // Write your code here.
    return isfast(root).first;
}
