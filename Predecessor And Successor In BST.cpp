// Predecessor And Successor In BST

/*************************************************************

    Following is the Binary Tree node structure
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

*************************************************************/

pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    // Write your code here.
    TreeNode* temp = root;
    int pred=-1;
    int succ=-1;
    while(temp){
        if(temp->data>key){
            succ = temp->data;
            temp = temp->left;
        }
        else if(temp -> data == key){
            break;
        }
        else{
            pred = temp->data;
            temp = temp->right;
        }

    }

    if(temp == NULL){
        return make_pair(pred, succ);
    }

    TreeNode* ltree = temp->left;
    while(ltree){
        pred = ltree->data;
        ltree = ltree->right;
    }

    TreeNode* rtree = temp->right;
    while(rtree){
        succ = rtree->data;
        rtree = rtree->left;
    }

    pair<int, int> ans = make_pair(pred, succ);
    return ans;
}
