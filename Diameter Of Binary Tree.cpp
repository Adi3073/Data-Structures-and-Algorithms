// Diameter Of Binary Tree

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int heightOfBinaryTree(TreeNode<int> *root)
{
	// Write your code here.
    if(!root){
        return 0;
    }
    int lt = heightOfBinaryTree(root->left);
    int rt = heightOfBinaryTree(root->right);

    int ans = max(lt, rt) + 1;
    return ans;
}
pair<int, int> diafast(TreeNode<int> *root){
        if(!root){
            pair<int, int> p = make_pair(0,0);
            return p;
        }
        pair<int, int> left = diafast(root->left);
        pair<int, int> right = diafast(root->right);
    
        int one = left.first;
        int two = right.first;
        int three = left.second + right.second ;
    
        pair<int, int> a;
        a.first = max(one, max(two, three));
        a.second = max(left.second, right.second)+1;
    
        return a;
    }
int diameterOfBinaryTree(TreeNode<int> *root){
	// Write Your Code Here.
    return diafast(root).first;
}
