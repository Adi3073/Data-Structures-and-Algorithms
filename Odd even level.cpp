// Odd even level

#include <bits/stdc++.h> 

/**********************************************************
    Following is the Binary Tree Node class structure

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
void helper(BinaryTreeNode<int>* root,long long&oddl,long long&evenl,int level){
    if(root==NULL){
        return;
    }
    if(level%2==0){
        evenl+=root->data;
    }else{
        oddl+=root->data;
    }
    helper(root->left,oddl,evenl,level+1);
    helper(root->right,oddl,evenl,level+1);
}
void evenOddLevelDifference(BinaryTreeNode<int>* root){

    // Write your code here. 
    if(root==NULL){
        cout<<0<<endl;
        return ;
    }  
    long long oddl=0;
    long long evenl=0;
    helper(root,oddl,evenl,1);
    long long ans=abs(oddl-evenl);
    cout<<ans<<endl;
}
